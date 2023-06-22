function [data, info] = legCommand
%LegCommand gives an empty data for starq_interfaces/LegCommand
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/LegCommand';
[data.input_pos, info.input_pos] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.input_vel, info.input_vel] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.input_acc, info.input_acc] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
info.MessageType = 'starq_interfaces/LegCommand';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'input_pos';
info.MatPath{2} = 'input_vel';
info.MatPath{3} = 'input_acc';
