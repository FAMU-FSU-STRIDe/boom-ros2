function ros1msg = starq_interfaces_msg_ODriveCommandArray_2To1_Converter(message,ros1msg)
%starq_interfaces_msg_ODriveCommandArray_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Commands.InputPosition = message.commands.input_position;
ros1msg.Commands.InputVelocity = message.commands.input_velocity;
ros1msg.Commands.InputTorque = message.commands.input_torque;
end