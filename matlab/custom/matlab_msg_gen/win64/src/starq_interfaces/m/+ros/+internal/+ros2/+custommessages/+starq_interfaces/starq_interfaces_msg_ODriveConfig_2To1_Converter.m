function ros1msg = starq_interfaces_msg_ODriveConfig_2To1_Converter(message,ros1msg)
%starq_interfaces_msg_ODriveConfig_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Id = message.id;
ros1msg.CanId = message.can_id;
ros1msg.RequestedState = message.requested_state;
ros1msg.ControlMode = message.control_mode;
ros1msg.InputMode = message.input_mode;
ros1msg.VelocityLimit = message.velocity_limit;
ros1msg.CurrentLimit = message.current_limit;
ros1msg.TrapTrajVelocityLimit = message.trap_traj_velocity_limit;
ros1msg.TrapTrajAccelerationLimit = message.trap_traj_acceleration_limit;
ros1msg.TrapTrajDecelerationLimit = message.trap_traj_deceleration_limit;
ros1msg.TrapTrajInertia = message.trap_traj_inertia;
ros1msg.PositionGain = message.position_gain;
ros1msg.VelocityGain = message.velocity_gain;
ros1msg.VelocityIntegratorGain = message.velocity_integrator_gain;
ros1msg.GearRatio = message.gear_ratio;
end