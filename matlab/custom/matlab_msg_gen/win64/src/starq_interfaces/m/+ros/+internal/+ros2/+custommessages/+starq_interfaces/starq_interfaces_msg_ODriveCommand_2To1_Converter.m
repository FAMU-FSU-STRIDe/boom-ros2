function ros1msg = starq_interfaces_msg_ODriveCommand_2To1_Converter(message,ros1msg)
%starq_interfaces_msg_ODriveCommand_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.InputPosition = message.input_position;
ros1msg.InputVelocity = message.input_velocity;
ros1msg.InputTorque = message.input_torque;
end