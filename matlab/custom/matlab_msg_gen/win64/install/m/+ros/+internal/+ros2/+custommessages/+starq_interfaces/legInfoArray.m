function [data, info] = legInfoArray
%LegInfoArray gives an empty data for starq_interfaces/LegInfoArray
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/LegInfoArray';
[data.infos, info.infos] = ros.internal.ros2.custommessages.starq_interfaces.legInfo;
info.infos.MLdataType = 'struct';
info.infos.MaxLen = NaN;
info.infos.MinLen = 0;
info.MessageType = 'starq_interfaces/LegInfoArray';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'infos';
info.MatPath{2} = 'infos.pos_estimate';
info.MatPath{3} = 'infos.vel_estimate';
info.MatPath{4} = 'infos.acc_estimate';
