# From https://docs.odriverobotics.com/v/latest/can-protocol.html

# Map from cmd id to message name
_state_msg_ids = {
    0x9: 'Get_Encoder_Estimates',
    0x01C: 'Get_Torques'
}
_info_msg_ids = {
    # IDs to read from can bus
    0x1: 'Heartbeat',
    0x14: 'Get_Iq',
    0x15: 'Get_Temperature',
    0x17: 'Get_Bus_Voltage_Current',
    0x01C: 'Get_Torques'
}
# Map from message name/keys to ODriveInfo field names
_state_msgs = {
    'Get_Encoder_Estimates' : [
        ('Pos_Estimate', 'position'),
        ('Vel_Estimate', 'velocity')
    ],
    'Get_Torques' : [
        ('Torque_Estimate', 'effort')
    ]
}
_info_msgs = {
    'Heartbeat' : [
        ('Axis_Error', 'fault'),
        ('Axis_State', 'state')
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
        ('Torque_Target', 'torque_target')
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
        ('Input_Pos', 'position'),
        ('Vel_FF', 'velocity'),
        ('Torque_FF', 'effort')
    ],
    'Set_Input_Vel': [
        ('Input_Vel', 'velocity'),
        ('Input_Torque_FF', 'effort')
    ],
    'Set_Input_Torque': [
        ('Input_Torque', 'effort')
    ],
}
# Map from control mode to message name
_command_msg_modes = {
    1: 'Set_Input_Torque',
    2: 'Set_Input_Vel',
    3: 'Set_Input_Pos'
}