classdef BasicController < handle
    
    properties
        Node
        Motors
        Legs
        LegTrajectoryPublisher
        MotorTrajectoryPublisher
    end
    
    methods
        function obj = BasicController()
            obj.Node = ros2node("starq_matlab_controller");
            obj.LegTrajectoryPublisher = LegTrajectoryPublisher(obj.Node);
            obj.MotorTrajectoryPublisher = MotorTrajectoryPublisher(obj.Node);
        end

        function ready(obj)
            obj.Motors.ready();
            obj.Legs.ready();
        end

        function idle(obj)
            obj.Motors.idle();
        end

        function estop(obj)
            obj.Motors.estop();
        end

        function runLegTrajectory(obj, trajectory, stride_frequency, num_loops)
            arguments
                obj
                trajectory
                stride_frequency = 1; % Hz
                num_loops = 1;
            end
            publish_rate = size(trajectory, 3) * stride_frequency;
            obj.LegTrajectoryPublisher.sendLegTrajectory(trajectory, num_loops, publish_rate);
        end

        function cancelLegTrajectory(obj)
            obj.LegTrajectoryPublisher.cancelTrajectory();
        end

        function runMotorTrajectory(obj, trajectory, frequency, num_loops)
            arguments
                obj
                trajectory
                frequency = 1; % Hz
                num_loops = 1;
            end
            publish_rate = size(trajectory, 3) * frequency;
            obj.MotorTrajectoryPublisher.sendLegTrajectory(trajectory, num_loops, publish_rate);
        end

        function cancelMotorTrajectory(obj)
            obj.MotorTrajectoryPublisher.cancelTrajectory();
        end

        function startRecording(obj, expected_size)
            arguments
                obj
                expected_size {mustBeNumeric} = 1
            end
            obj.Motors.startRecording(expected_size);
            obj.Legs.startRecording(expected_size);
        end

        function stopRecording(obj)
            obj.Motors.stopRecording();
            obj.Legs.stopRecording();
        end

        function motor_info_data = MotorData(obj)
            motor_info_data = obj.Motors.Recorder.Data(1:obj.Motors.Recorder.Size);
        end

        function leg_info_data = LegData(obj)
            leg_info_data = obj.Legs.Recorder.Data(1:obj.Legs.Recorder.Size);
        end
    end
end

