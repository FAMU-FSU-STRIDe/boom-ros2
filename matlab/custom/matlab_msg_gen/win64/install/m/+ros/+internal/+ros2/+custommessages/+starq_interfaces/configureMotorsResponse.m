function [data, info] = configureMotorsResponse
%ConfigureMotors gives an empty data for starq_interfaces/ConfigureMotorsResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/ConfigureMotorsResponse';
info.MessageType = 'starq_interfaces/ConfigureMotorsResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,0);
