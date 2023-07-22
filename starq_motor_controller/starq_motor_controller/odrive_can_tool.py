# Written by Jonathan Boylan

# ODrive CAN Tutorial: https://docs.odriverobotics.com/v/latest/can-guide.html

from can import Bus, Listener
from can.message import Message
from rclpy.node import Node
import cantools
from starq_interfaces.msg import ODriveInfo, ODriveConfig, ODriveCommand

# From https://docs.odriverobotics.com/v/latest/can-protocol.html

# Map from cmd id to message name
_info_msg_ids = {
    # IDs to read from can bus
    0x1: 'Heartbeat',
    0x9: 'Get_Encoder_Estimates',
    0x14: 'Get_Iq',
    0x15: 'Get_Temperature',
    0x17: 'Get_Bus_Voltage_Current',
    #0x01C: 'Get_Torques', # TODO: Why doesn't this work?
}
# Map from message name/keys to ODriveInfo field names
_info_msgs = {
    'Heartbeat' : [
        ('Axis_Error', 'fault'),
        ('Axis_State', 'state')
    ],
    'Get_Encoder_Estimates' : [
        ('Pos_Estimate', 'pos_estimate'),
        ('Vel_Estimate', 'vel_estimate')
    ],
    'Get_Iq' : [
        ('Iq_Setpoint', 'iq_setpoint'),
        ('Iq_Measured', 'iq_measured')
    ],
    'Get_Temperature' : [
        ('FET_Temperature', 'fet_temperature'),
        ('Motor_Temperature', 'motor_temperature')
    ],
    'Get_Bus_Voltage_Current' : [
        ('Bus_Voltage', 'bus_voltage'),
        ('Bus_Current', 'bus_current')
    ],
    'Get_Torques' : [
        ('Torque_Target', 'torque_target'),
        ('Torque_Estimate', 'torque_estimate')
    ]
}
_config_msgs = {
    'Set_Axis_State' : [
        ('Axis_Requested_State', 'requested_state')
    ],
    'Set_Controller_Mode' : [
        ('Control_Mode', 'control_mode'),
        ('Input_Mode', 'input_mode')
    ],
    'Set_Limits': [
        ('Velocity_Limit', 'velocity_limit'),
        ('Current_Limit', 'current_limit')
    ],
    'Set_Traj_Vel_Limit': [
        ('Traj_Vel_Limit', 'trap_traj_velocity_limit'),
    ],
    'Set_Traj_Accel_Limits': [
        ('Traj_Accel_Limit', 'trap_traj_acceleration_limit'),
        ('Traj_Decel_Limit', 'trap_traj_deceleration_limit'),
    ],
    'Set_Traj_Inertia': [
        ('Traj_Inertia', 'trap_traj_inertia'),
    ],
    'Set_Pos_Gain' : [
        ('Pos_Gain', 'position_gain'),
    ],
    'Set_Vel_Gains' : [
        ('Vel_Gain', 'velocity_gain'),
        ('Vel_Integrator_Gain', 'velocity_integrator_gain')
    ]
}
_command_msgs = {
    'Set_Input_Pos': [
        ('Input_Pos', 'input_position'),
        ('Vel_FF', 'input_velocity'),
        ('Torque_FF', 'input_torque')
    ],
    'Set_Input_Vel': [
        ('Input_Vel', 'input_velocity'),
        ('Input_Torque_FF', 'input_torque')
    ],
    'Set_Input_Torque': [
        ('Input_Torque', 'input_torque')
    ],
}
# Map from control mode to message name
_command_msg_modes = {
    1: 'Set_Input_Torque',
    2: 'Set_Input_Vel',
    3: 'Set_Input_Pos'
}

class ODriveCANTool(Listener):

    def __init__(self, node : Node):
        self.node = node

        # Maximum of 63 (0x3F) can ids
        self.data = [ODriveInfo() for _ in range(0x3F)]

        # Download: https://odrive-cdn.nyc3.digitaloceanspaces.com/releases/support-files/CZ2pCIXzftSQ0cg-duTIUGifMfiFgkAOl-YUsVpvEkc/odrive-cansimple.dbc
        self.candb = cantools.db.load_file("/starq_ws/src/docs/odrive-cansimple.dbc")
        try:
            self.canbus = Bus("can0", bustype="socketcan")
            self.canok = True
        except Exception:
            # Troubleshooting
            # sudo chmod +777 /starq_ws/src/docs/startup/start-can0.sh
            # sudo cp /starq_ws/src/docs/startup/can0.service /etc/systemd/system/can0.service
            # sudo systemctl enable can0.sh
            # sudo systemctl start can0.sh
            self.node.get_logger().error("Could not connect to CAN interface.")
            self.canok = False


    def on_message_received(self, msg: Message) -> None:
        # Runs when CAN Listener receives a new message
        frame_id = msg.arbitration_id & 0b11111 # Frame id = lower 5 bits
        if frame_id in _info_msg_ids:
            can_id = (msg.arbitration_id >> 5) & 0b111111 # CAN id = upper 6 bits
            msg_name = _info_msg_ids[frame_id]
            msg_data = self.candb.decode_message("Axis0_" + msg_name, msg.data)
            for key, field in _info_msgs[msg_name]:
                value = msg_data[key]
                if frame_id == 0x1: # Heartbeat message data has a different type than the rest
                    value = value.value
                setattr(self.data[can_id], field, value) # Update data by field name


    def get_latest_info(self, can_id : int) -> ODriveInfo:
        return self.data[can_id]
    
    def idle(self, can_id : int) -> None:
        self.send_can_msg(can_id, 'Set_Axis_State', {'Axis_Requested_State': 1}) # Idle = 1

    def clear_errors(self, can_id : int) -> None:
        self.send_can_msg(can_id, 'Clear_Errors', {})

    def emergency_stop(self, can_id : int) -> None:
        self.send_can_msg(can_id, 'Estop', {})

    def send_configuration(self, can_id : int, config : ODriveConfig) -> None:
        if config.requested_state == 0: # Emergency stop check
            self.emergency_stop()
            return
        self.clear_errors(can_id) # Clear errors
        for msg_name, keypairs in _config_msgs.items():
            msg_data = {}
            for key, field in keypairs:
                msg_data[key] = getattr(config, field) # Get data by field name
            self.send_can_msg(can_id, msg_name, msg_data)

    def send_command(self, can_id : int, command : ODriveCommand, control_mode : int) -> None:
        if control_mode in _command_msg_modes:
            msg_name = _command_msg_modes[control_mode]
            msg_data = {}
            for key, field in _command_msgs[msg_name]:
                msg_data[key] = getattr(command, field) # Get data by field name
            self.send_can_msg(can_id, msg_name, msg_data)

    def send_can_msg(self, can_id : int, msg_name : str, msg_data) -> None:
        can_msg = self.candb.get_message_by_name("Axis0_" + msg_name)
        # ^ Not in ODrive documentation, but message name requires 'Axis0_' prefix
        can_data = can_msg.encode(msg_data)
        can_msg = Message(arbitration_id=((can_id << 5) | can_msg.frame_id), is_extended_id=False, data=can_data) # Create message
        if self.canok: # make sure can is connected
            self.canbus.send(can_msg)

    def shutdown(self):
        if self.canok:
            self.canbus.shutdown()