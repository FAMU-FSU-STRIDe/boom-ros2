clear
%%

leg0 = ros2message("starq_interfaces/LegConfig");
leg0.id = uint8(0);
leg0.kinematic_type = 'fivebar-2d';
leg0.motor_ids = [uint8(0),uint8(1)];

legs = [leg0];

leg_conf_msg = ros2message("starq_interfaces/ConfigureLegsRequest");
leg_conf_msg.configs = legs;

controller = STARQController();
controller.configureLegs(leg_conf_msg);

clear