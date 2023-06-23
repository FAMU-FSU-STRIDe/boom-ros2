classdef BoomController < BaseController
    
    properties
    end

    methods
        function obj = BoomController()
            obj@BaseController();
            obj.MotorConfigs = [...
                defaultMotorConfig(0, 0),...
                defaultMotorConfig(1, 1)];
            obj.LegConfigs = defaultFiveBar2DLegConfig(0, [0,1]);
            if (waitForServer(obj.ConfigureMotorsServiceClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to ConfigureMotorsServiceClient");
            else
                obj.updateMotorConfigs()
            end
            if (waitForServer(obj.ConfigureLegsServiceClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to ConfigureLegsServiceClient");
            else
                obj.updateLegConfigs()
            end
            if (waitForServer(obj.RunLegTrajectoryActionClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to RunLegTrajectoryActionClient");
            end
        end

        function sendPointTrajectory(obj, points, publish_rate, loops)
            arguments
                obj
                points
                publish_rate
                loops = 1
            end
            goalMsg = ros2message("starq_interfaces/RunLegTrajectoryGoal");
            goalMsg.loops = int32(loops);
            goalMsg.publish_rate = single(publish_rate);
            for i = 1:length(points)
                leg_cmd = ros2message("starq_interfaces/LegCommandArray");
                leg_cmd.commands(1).input_pos = single(points(:,i));
                leg_cmd.commands(1).input_vel = single([0;0]);
                leg_cmd.commands(1).input_acc = single([0;0]);
                goalMsg.trajectory(i) = leg_cmd;
            end
            obj.sendLegTrajectory(goalMsg);
        end

        function runGait(obj, points, stride_frequency, loops)
            arguments
                obj
                points
                stride_frequency {mustBeNumeric, mustBePositive} = 2.5
                loops {mustBeInteger} = -1
            end
            traj_size = size(points, 2);
            publish_rate = traj_size * stride_frequency;
            obj.sendPointTrajectory(points,publish_rate,loops);
        end
    end

end

