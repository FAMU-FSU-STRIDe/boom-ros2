classdef BoomController2 < BasicController
    
    properties
        BoomEncodersRecorder
        BoomEncodersInfoRate
    end
    
    methods
        function obj = BoomController2()
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

        function [time, orientation, tilt, height, speed] = boomEncodersData(obj)
            record = obj.BoomEncodersRecorder.RecordingData;
            record_size = length(record);
            time = linspace(0,(1/obj.BoomEncodersInfoRate)*record_size, record_size);
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
end

