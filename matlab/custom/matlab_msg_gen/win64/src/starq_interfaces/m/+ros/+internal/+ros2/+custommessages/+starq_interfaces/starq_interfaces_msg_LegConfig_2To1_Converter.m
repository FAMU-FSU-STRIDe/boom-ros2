function ros1msg = starq_interfaces_msg_LegConfig_2To1_Converter(message,ros1msg)
%starq_interfaces_msg_LegConfig_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Id = message.id;
ros1msg.KinematicType = message.kinematic_type{1};
end