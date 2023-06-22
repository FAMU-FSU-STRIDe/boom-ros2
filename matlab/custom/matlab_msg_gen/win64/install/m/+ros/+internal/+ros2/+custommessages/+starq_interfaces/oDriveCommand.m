function [data, info] = oDriveCommand
%ODriveCommand gives an empty data for starq_interfaces/ODriveCommand
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/ODriveCommand';
[data.input_position, info.input_position] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.input_velocity, info.input_velocity] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.input_torque, info.input_torque] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
info.MessageType = 'starq_interfaces/ODriveCommand';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'input_position';
info.MatPath{2} = 'input_velocity';
info.MatPath{3} = 'input_torque';
