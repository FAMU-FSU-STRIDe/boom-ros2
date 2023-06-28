classdef BoomController < BasicController
    
    properties
        BoomEncodersRecorder
        BoomEncodersInfoRate
    end
    
    methods
        function obj = BoomController()
            @obj.BasicController;
            obj.BoomEncodersRecorder = TopicRecorder(obj.Node,...
                "/starq/boom/info", "starq_interfaces/BoomEncoderInfo");
            obj.BoomEncodersInfoRate = 50; % Hz
        end

        function runPointTrajectory(obj, points, stride_frequency, num_loops, record_info)
            arguments
                obj
                points
                stride_frequency = 1; % Hz
                num_loops = 1;
                record_info = true;
            end
            dims = size(points,1);
            traj_size = size(points,2);
            trajectory = nan(dims, 1, traj_size);
            trajectory(:,1,:) = points;
            obj.runTrajectory(trajectory, stride_frequency, num_loops, record_info);
        end
        
        function startRecording(obj, expected_size)
            arguments
                obj
                expected_size {mustBeNumeric} = 1
            end
            startRecording@BasicController(obj, expected_size);
            obj.BoomEncodersRecorder.startRecording(expected_size);
        end

        function stopRecording(obj)
            stopRecording@BasicController(obj)
            obj.BoomEncodersRecorder.stopRecording();
        end

        function [orientation, tilt, height, speed] = boomEncodersData(obj)
            [orientation, tilt, height, speed] = ...
                parseBoomEncodersInfoData(obj.BoomEncodersRecorder.RecordingData);
        end
    end
end

