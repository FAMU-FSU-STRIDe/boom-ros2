function ros1msg = starq_interfaces_msg_ODriveInfo_2To1_Converter(message,ros1msg)
%starq_interfaces_msg_ODriveInfo_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.State = message.state;
ros1msg.Fault = message.fault;
ros1msg.PosEstimate = message.pos_estimate;
ros1msg.VelEstimate = message.vel_estimate;
ros1msg.TorqueEstimate = message.torque_estimate;
ros1msg.TorqueTarget = message.torque_target;
ros1msg.IqSetpoint = message.iq_setpoint;
ros1msg.IqMeasured = message.iq_measured;
ros1msg.MotorTemperature = message.motor_temperature;
ros1msg.BusVoltage = message.bus_voltage;
ros1msg.BusCurrent = message.bus_current;
ros1msg.PosError = message.pos_error;
ros1msg.VelError = message.vel_error;
ros1msg.TorqueError = message.torque_error;
end