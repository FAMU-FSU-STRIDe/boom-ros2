function ros2msg = starq_interfaces_msg_ODriveCommand_1To2_Converter(message,ros2msg)
%starq_interfaces_msg_ODriveCommand_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.input_position = message.InputPosition;
ros2msg.input_velocity = message.InputVelocity;
ros2msg.input_torque = message.InputTorque;
end