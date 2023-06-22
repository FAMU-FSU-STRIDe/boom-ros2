function ros2msg = starq_interfaces_msg_ODriveConfig_1To2_Converter(message,ros2msg)
%starq_interfaces_msg_ODriveConfig_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.id = message.Id;
ros2msg.can_id = message.CanId;
ros2msg.requested_state = message.RequestedState;
ros2msg.control_mode = message.ControlMode;
ros2msg.input_mode = message.InputMode;
ros2msg.velocity_limit = message.VelocityLimit;
ros2msg.current_limit = message.CurrentLimit;
ros2msg.trap_traj_velocity_limit = message.TrapTrajVelocityLimit;
ros2msg.trap_traj_acceleration_limit = message.TrapTrajAccelerationLimit;
ros2msg.trap_traj_deceleration_limit = message.TrapTrajDecelerationLimit;
ros2msg.trap_traj_inertia = message.TrapTrajInertia;
ros2msg.position_gain = message.PositionGain;
ros2msg.velocity_gain = message.VelocityGain;
ros2msg.velocity_integrator_gain = message.VelocityIntegratorGain;
ros2msg.gear_ratio = message.GearRatio;
end