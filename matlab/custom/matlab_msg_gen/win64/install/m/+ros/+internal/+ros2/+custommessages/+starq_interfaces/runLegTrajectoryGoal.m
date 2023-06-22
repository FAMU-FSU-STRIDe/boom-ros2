function [data, info] = runLegTrajectoryGoal
%RunLegTrajectoryGoal gives an empty data for starq_interfaces/RunLegTrajectoryGoal
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'starq_interfaces/RunLegTrajectoryGoal';
[data.publish_rate, info.publish_rate] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.trajectory, info.trajectory] = ros.internal.ros2.custommessages.starq_interfaces.legCommandArray;
info.trajectory.MLdataType = 'struct';
info.trajectory.MaxLen = NaN;
info.trajectory.MinLen = 0;
info.MessageType = 'starq_interfaces/RunLegTrajectoryGoal';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'publish_rate';
info.MatPath{2} = 'trajectory';
info.MatPath{3} = 'trajectory.commands';
info.MatPath{4} = 'trajectory.commands.input_pos';
info.MatPath{5} = 'trajectory.commands.input_vel';
info.MatPath{6} = 'trajectory.commands.input_acc';
