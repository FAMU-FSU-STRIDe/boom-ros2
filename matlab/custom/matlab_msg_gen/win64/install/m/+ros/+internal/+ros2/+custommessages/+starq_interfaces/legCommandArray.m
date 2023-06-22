function [data, info] = legCommandArray
%LegCommandArray gives an empty data for starq_interfaces/LegCommandArray
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/LegCommandArray';
[data.commands, info.commands] = ros.internal.ros2.custommessages.starq_interfaces.legCommand;
info.commands.MLdataType = 'struct';
info.commands.MaxLen = NaN;
info.commands.MinLen = 0;
info.MessageType = 'starq_interfaces/LegCommandArray';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'commands';
info.MatPath{2} = 'commands.input_pos';
info.MatPath{3} = 'commands.input_vel';
info.MatPath{4} = 'commands.input_acc';
