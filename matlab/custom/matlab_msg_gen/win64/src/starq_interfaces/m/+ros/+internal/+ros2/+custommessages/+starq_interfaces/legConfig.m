function [data, info] = legConfig
%LegConfig gives an empty data for starq_interfaces/LegConfig
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/LegConfig';
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.kinematic_type, info.kinematic_type] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.motor_ids, info.motor_ids] = ros.internal.ros2.messages.ros2.default_type('uint8',NaN,0);
info.MessageType = 'starq_interfaces/LegConfig';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'id';
info.MatPath{2} = 'kinematic_type';
info.MatPath{3} = 'motor_ids';
