classdef BoomController < BaseController
    
    properties
        BoomEncodersSubscriber % TODO
    end

    methods
        function obj = BoomController()
            obj@BaseController();
            obj.MotorConfigs = [...
                defaultMotorConfig(0, 0),...
                defaultMotorConfig(1, 1)];
            obj.LegConfigs = defaultFiveBar2DLegConfig(0, [0,1]);
            obj.updateMotorConfigs();
            obj.updateLegConfigs();
        end

        function runPointTrajectory(obj, points, freq, loops, record)
            arguments
                obj
                points
                freq
                loops = 1
                record = false
            end
            goalMsg = ros2message("starq_interfaces/RunLegTrajectoryGoal");
            traj_size = size(points, 2);
            goalMsg.num_loops = int32(loops);
            goalMsg.publish_rate = single(traj_size * freq);
            for i = 1:traj_size
                leg_cmd = ros2message("starq_interfaces/LegCommandArray");
                leg_cmd.commands(1).input_pos = single(points(:,i));
                leg_cmd.commands(1).input_vel = single([0;0]);
                leg_cmd.commands(1).input_acc = single([0;0]);
                goalMsg.trajectory(i) = leg_cmd;
            end
            obj.sendLegTrajectory(goalMsg, record);
        end

        function goToPoint(obj, x, y)
            obj.runPointTrajectory([x;y], 1);
        end

        function recordPointTrajectory(obj, points, freq, loops)
            obj.runPointTrajectory(points, freq, loops, true);
        end

        function loopPointTrajectory(obj, points, freq)
            obj.runPointTrajectory(points, freq, -1, false);
        end

    end

end

