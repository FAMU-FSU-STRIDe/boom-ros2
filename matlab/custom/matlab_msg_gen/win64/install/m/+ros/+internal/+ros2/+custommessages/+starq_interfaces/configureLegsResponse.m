function [data, info] = configureLegsResponse
%ConfigureLegs gives an empty data for starq_interfaces/ConfigureLegsResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/ConfigureLegsResponse';
info.MessageType = 'starq_interfaces/ConfigureLegsResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,0);
