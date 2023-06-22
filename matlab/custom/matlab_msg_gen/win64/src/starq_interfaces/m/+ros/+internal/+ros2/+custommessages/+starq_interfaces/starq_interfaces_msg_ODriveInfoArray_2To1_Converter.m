function ros1msg = starq_interfaces_msg_ODriveInfoArray_2To1_Converter(message,ros1msg)
%starq_interfaces_msg_ODriveInfoArray_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Infos.State = message.infos.state;
ros1msg.Infos.Fault = message.infos.fault;
ros1msg.Infos.PosEstimate = message.infos.pos_estimate;
ros1msg.Infos.VelEstimate = message.infos.vel_estimate;
ros1msg.Infos.TorqueEstimate = message.infos.torque_estimate;
ros1msg.Infos.TorqueTarget = message.infos.torque_target;
ros1msg.Infos.IqSetpoint = message.infos.iq_setpoint;
ros1msg.Infos.IqMeasured = message.infos.iq_measured;
ros1msg.Infos.MotorTemperature = message.infos.motor_temperature;
ros1msg.Infos.BusVoltage = message.infos.bus_voltage;
ros1msg.Infos.BusCurrent = message.infos.bus_current;
ros1msg.Infos.PosError = message.infos.pos_error;
ros1msg.Infos.VelError = message.infos.vel_error;
ros1msg.Infos.TorqueError = message.infos.torque_error;
end