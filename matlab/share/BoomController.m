classdef BoomController < BasicController
    
    properties
        BoomRecorder
    end
    
    methods
        function obj = BoomController()
            @obj.BasicController;
            obj.Motors = ODriveController(obj.Node, 2);
            obj.Legs = LegController(obj.Node, 1);
            obj.BoomRecorder = TopicRecorder(obj.Node,...
                "/starq/boom/info", "starq_interfaces/BoomEncoderInfo");
        end

        function runPointTrajectory(obj, points, stride_frequency, num_loops)
            arguments
                obj
                points
                stride_frequency = 1; % Hz
                num_loops = 1;
            end
            dims = size(points,1);
            traj_size = size(points,2);
            trajectory = nan(dims, 1, traj_size);
            trajectory(:,1,:) = points;
            obj.runTrajectory(trajectory, stride_frequency, num_loops);
        end
        
        function startRecording(obj, expected_size)
            arguments
                obj
                expected_size {mustBeNumeric} = 1
            end
            startRecording@BasicController(obj, expected_size);
            obj.BoomRecorder.startRecording(expected_size);
        end

        function stopRecording(obj)
            stopRecording@BasicController(obj)
            obj.BoomRecorder.stopRecording();
        end

        function boom_encoder_data = BoomData(obj)
            boom_encoder_data = obj.BoomRecorder.Data(1:obj.BoomRecorder.Size);
        end
    end
end

