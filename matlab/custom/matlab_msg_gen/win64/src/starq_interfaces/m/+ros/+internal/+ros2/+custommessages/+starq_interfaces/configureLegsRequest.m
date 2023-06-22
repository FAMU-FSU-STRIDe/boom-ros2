function [data, info] = configureLegsRequest
%ConfigureLegs gives an empty data for starq_interfaces/ConfigureLegsRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/ConfigureLegsRequest';
[data.configs, info.configs] = ros.internal.ros2.custommessages.starq_interfaces.legConfig;
info.configs.MLdataType = 'struct';
info.configs.MaxLen = NaN;
info.configs.MinLen = 0;
info.MessageType = 'starq_interfaces/ConfigureLegsRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'configs';
info.MatPath{2} = 'configs.id';
info.MatPath{3} = 'configs.kinematic_type';
info.MatPath{4} = 'configs.motor_ids';
