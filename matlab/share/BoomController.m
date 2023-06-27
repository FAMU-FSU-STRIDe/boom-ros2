classdef BoomController < BaseController
    
    properties
        BoomEncodersSubscriber
        BoomEncodersLatestInfo
        BoomEncodersRecording
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
            obj.BoomEncodersSubscriber = ros2subscriber(obj.Node,...
                "/starq/boom/info", "starq_interfaces/BoomEncoderInfo",...
                @obj.boomEncodersCallback);
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
            if (record)
                obj.startRecordingBoomInfo();
            end
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

        function startRecordingBoomInfo(obj)
            obj.BoomEncodersRecording = repmat(...
                ros2message("starq_interfaces/BoomEncoderInfo"),...
                obj.RecordingExpectedLength, 1);
            obj.isInRecordingMode = true;
        end

        function [time, orientation, tilt, height, speed] = recordingResultsBoom(obj)
            record = obj.BoomEncodersRecording;
            record_size = length(record);
            time = linspace(0,(1/obj.FeedbackRate)*record_size, record_size);
            orientation = nan(record_size, 1);
            tilt = nan(record_size, 1);
            height = nan(record_size, 1);
            speed = nan(record_size, 1);
            for r = 1:record_size
                info = record(r);
                orientation(r) = info.orientation;
                tilt(r) = info.tilt;
                height(r) = info.height;
                speed(r) = info.speed;
            end
        end
    end

    methods (Access=private)

        function boomEncodersCallback(obj, msg)
            obj.BoomEncodersLatestInfo = msg;
            if (obj.isInRecordingMode)
                obj.BoomEncodersRecording = [obj.BoomEncodersRecording; msg];
            end
        end

    end

end

