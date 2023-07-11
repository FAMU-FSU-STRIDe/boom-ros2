# Message to update ODrive Controller config

# Motor ID
uint8 id

# CAN Communication ID
uint8 can_id

# Axis States
# https://docs.odriverobotics.com/v/latest/fibre_types/com_odriverobotics_ODrive.html#ODrive.Axis.AxisState
uint32 requested_state

# Control modes
# https://docs.odriverobotics.com/v/latest/fibre_types/com_odriverobotics_ODrive.html#ODrive.Controller.ControlMode
uint32 control_mode

# Input modes
# https://docs.odriverobotics.com/v/latest/fibre_types/com_odriverobotics_ODrive.html#ODrive.Controller.InputMode
uint32 input_mode

# Limits
float32 velocity_limit
float32 current_limit

# Trapezoidal Trajectory config
# https://docs.odriverobotics.com/v/latest/control-input-modes.html#trajectory-control
float32 trap_traj_velocity_limit
float32 trap_traj_acceleration_limit
float32 trap_traj_deceleration_limit
float32 trap_traj_inertia

# Gains
# https://docs.odriverobotics.com/v/latest/control.html
float32 position_gain
float32 velocity_gain
float32 velocity_integrator_gain