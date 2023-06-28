classdef BasicController < handle
    
    properties
        Node
        ODriveController
        LegController
        TrajectoryPublisher
    end
    
    methods
        function obj = BasicController()
            obj.Node = ros2node("starq_matlab_controller");
            obj.ODriveController = ODriveController(obj.Node, 2);
            obj.LegController = LegController(obj.Node, 1);
            obj.TrajectoryPublisher = TrajectoryPublisher(obj.Node);
        end

        function ready(obj)
            obj.ODriveController.ready();
            obj.LegController.ready();
        end

        function idle(obj)
            obj.ODriveController.idle();
        end

        function estop(obj)
            obj.ODriveController.estop();
        end

        function runTrajectory(obj, trajectory, stride_frequency, num_loops, record_info)
            arguments
                obj
                trajectory
                stride_frequency = 1; % Hz
                num_loops = 1;
                record_info = false;
            end
            publish_rate = size(trajectory, 3) * stride_frequency;
            obj.TrajectoryPublisher.sendLegTrajectory(trajectory, num_loops, publish_rate, record_info);
        end

        function cancelTrajectory(obj)
            obj.TrajectoryPublisher.cancelTrajectory();
        end

        function startRecording(obj, expected_size)
            arguments
                obj
                expected_size {mustBeNumeric} = 1
            end
            obj.ODriveController.startRecording(expected_size);
            obj.LegController.startRecording(expected_size);
        end

        function stopRecording(obj)
            obj.ODriveController.stopRecording();
            obj.LegController.stopRecording();
        end

        function [time, motor_pos, motor_vel, motor_trq, ...
                    motor_pos_cmd, motor_vel_cmd, motor_trq_cmd,...
                    motor_qcurrent, bus_current, bus_voltage,...
                    fet_temp, motor_temp] = motorData(obj)
            [time, motor_pos, motor_vel, motor_trq, ...
                    motor_pos_cmd, motor_vel_cmd, motor_trq_cmd,...
                    motor_qcurrent, bus_current, bus_voltage,...
                    fet_temp, motor_temp] = obj.ODriveController.recordingData();
        end

        function todo = legData(obj)
            todo = obj.LegController.recordingData();
        end
    end
end

