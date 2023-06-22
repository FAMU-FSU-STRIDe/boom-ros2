function ros2msg = starq_interfaces_msg_ODriveInfo_1To2_Converter(message,ros2msg)
%starq_interfaces_msg_ODriveInfo_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.state = message.State;
ros2msg.fault = message.Fault;
ros2msg.pos_estimate = message.PosEstimate;
ros2msg.vel_estimate = message.VelEstimate;
ros2msg.torque_estimate = message.TorqueEstimate;
ros2msg.torque_target = message.TorqueTarget;
ros2msg.iq_setpoint = message.IqSetpoint;
ros2msg.iq_measured = message.IqMeasured;
ros2msg.motor_temperature = message.MotorTemperature;
ros2msg.bus_voltage = message.BusVoltage;
ros2msg.bus_current = message.BusCurrent;
ros2msg.pos_error = message.PosError;
ros2msg.vel_error = message.VelError;
ros2msg.torque_error = message.TorqueError;
end