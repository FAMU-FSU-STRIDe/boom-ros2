builtin_interfaces/Time time

# Names of motors
string[] name

uint8[] state
uint32[] fault

float32[] pos_estimate
float32[] vel_estimate
float32[] torque_estimate
float32[] torque_target

float32[] iq_setpoint
float32[] iq_measured

float32[] fet_temperature
float32[] motor_temperature

float32[] bus_voltage
float32[] bus_current

float32[] last_pos_cmd
float32[] last_vel_cmd
float32[] last_torque_cmd