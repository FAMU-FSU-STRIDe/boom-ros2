clear
%%

motor0 = ros2message("starq_interfaces/ODriveConfig");
motor0.id = uint8(0);
motor0.can_id = uint8(0);
motor0.requested_state = uint32(8); % CLOSED LOOP CONTROL
motor0.control_mode = uint32(3); % POSITION
motor0.input_mode = uint32(1); % PASSTHROUGH
motor0.velocity_limit = single(25); % rev/s
motor0.current_limit = single(5); % A
motor0.position_gain = single(25);
motor0.velocity_gain = single(0.15);
motor0.velocity_integrator_gain = single(0.30);
motor0.gear_ratio = single(6);

motor1 = motor0;

motors = [motor0, motor1];

motor_conf_msg = ros2message("starq_interfaces/ConfigureMotorsRequest");
motor_conf_msg.configs = motors;

controller = STARQController();
controller.configureMotors(motor_conf_msg);

clear