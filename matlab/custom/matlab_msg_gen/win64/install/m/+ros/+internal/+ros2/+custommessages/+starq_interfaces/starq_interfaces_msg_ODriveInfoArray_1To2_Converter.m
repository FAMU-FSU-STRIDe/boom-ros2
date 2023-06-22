function ros2msg = starq_interfaces_msg_ODriveInfoArray_1To2_Converter(message,ros2msg)
%starq_interfaces_msg_ODriveInfoArray_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.infos.state = message.Infos.State;
ros2msg.infos.fault = message.Infos.Fault;
ros2msg.infos.pos_estimate = message.Infos.PosEstimate;
ros2msg.infos.vel_estimate = message.Infos.VelEstimate;
ros2msg.infos.torque_estimate = message.Infos.TorqueEstimate;
ros2msg.infos.torque_target = message.Infos.TorqueTarget;
ros2msg.infos.iq_setpoint = message.Infos.IqSetpoint;
ros2msg.infos.iq_measured = message.Infos.IqMeasured;
ros2msg.infos.motor_temperature = message.Infos.MotorTemperature;
ros2msg.infos.bus_voltage = message.Infos.BusVoltage;
ros2msg.infos.bus_current = message.Infos.BusCurrent;
ros2msg.infos.pos_error = message.Infos.PosError;
ros2msg.infos.vel_error = message.Infos.VelError;
ros2msg.infos.torque_error = message.Infos.TorqueError;
end