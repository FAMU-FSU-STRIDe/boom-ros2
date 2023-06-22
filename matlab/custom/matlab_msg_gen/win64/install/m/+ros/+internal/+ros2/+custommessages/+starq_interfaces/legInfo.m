function [data, info] = legInfo
%LegInfo gives an empty data for starq_interfaces/LegInfo
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/LegInfo';
[data.pos_estimate, info.pos_estimate] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.vel_estimate, info.vel_estimate] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.acc_estimate, info.acc_estimate] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
info.MessageType = 'starq_interfaces/LegInfo';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'pos_estimate';
info.MatPath{2} = 'vel_estimate';
info.MatPath{3} = 'acc_estimate';
