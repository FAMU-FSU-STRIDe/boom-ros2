# Written by Jonathan Boylan

# ODrive CAN Tutorial: https://docs.odriverobotics.com/v/latest/can-guide.html

from can import Bus, Listener
from can.message import Message
from rclpy.node import Node
import cantools
from sensor_msgs.msg import JointState
from starq_interfaces.msg import ODriveInfo, ODriveConfig
import starq_motor_controller.odrive_can_msgs as can_msgs

class ODriveCANTool(Listener):

    def __init__(self, node : Node):
        self.node = node

        self.can_ids : dict[int, str] = {}
        self.configs : dict[str, ODriveConfig] = {}
        self.state = JointState()
        self.info = ODriveInfo()

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
        can_id = (msg.arbitration_id >> 5) & 0b111111 # CAN id = upper 6 bits
        joint_name = 
        if frame_id in can_msgs._state_msg_ids:
            msg_name = can_msgs._state_msg_ids[frame_id]
            msg_data = self.candb.decode_message("Axis0_" + msg_name, msg.data)
            for key, field in can_msgs._state_msgs[msg_name]:
                value = msg_data[key]
                setattr(self.state[can_id], field, value) # Update data by field name
        if frame_id in can_msgs._info_msg_ids:
            msg_name = can_msgs._info_msg_ids[frame_id]
            msg_data = self.candb.decode_message("Axis0_" + msg_name, msg.data)
            for key, field in can_msgs._info_msgs[msg_name]:
                value = msg_data[key]
                if frame_id == 0x1: # Heartbeat message data has a different type than the rest
                    value = value.value
                setattr(self.data[can_id], field, value) # Update data by field name


    def get_info(self) -> ODriveInfo:
        return self.data
    
    def idle(self, can_id : int) -> None:
        self.send_can_msg(can_id, 'Set_Axis_State', {'Axis_Requested_State': 1}) # Idle = 1

    def clear_errors(self, can_id : int) -> None:
        self.send_can_msg(can_id, 'Clear_Errors', {})

    def emergency_stop(self, can_id : int) -> None:
        self.send_can_msg(can_id, 'Estop', {})

    def send_config(self, config : ODriveConfig) -> None:
        for msg_name, keypairs in can_msgs._config_msgs.items():
            msg_data = {}
            for key, field in keypairs:
                msg_data[key] = getattr(config, field)
            self.send_can_msg(config.can_id, msg_name, msg_data)

    def send_command(self, command : JointState, configs : dict[str, ODriveConfig]) -> None:
        for idx, name in enumerate(command.name):
            try:
                config : ODriveConfig = configs[name]
                msg_name = _command_msg_modes[config.control_mode]
                msg_data = {}
                for key, field in _command_msgs[msg_name]:
                    msg_data[key] = getattr(command, field)[idx] # Get data by field name
                self.send_can_msg(config.can_id, msg_name, msg_data)
            except KeyError:
                self.node.get_logger().error(f"Missing motor configuration for '{name}'")
                continue

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