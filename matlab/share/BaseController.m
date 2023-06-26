classdef BaseController < handle
    
    properties
        Node
        MotorConfigs
        LegConfigs
        ConfigureMotorsServiceClient
        ConfigureLegsServiceClient
        RunLegTrajectoryActionClient
        RunLegTrajectoryActionGoalHandle
        RunLegTrajectoryActionLatestFeedback
        RunLegTrajectoryActionLatestResult
        isInRecordingMode
        RecordingLength
        TrajectoryActionRecording
        FeedbackRate
    end
    
    methods (Access=public)
        function obj = BaseController()
            obj.Node = ros2node("starq_matlab_controller");
            obj.MotorConfigs = [];
            obj.LegConfigs = [];
            obj.ConfigureMotorsServiceClient = ros2svcclient(obj.Node,...
                "/starq/motors/conf","starq_interfaces/ConfigureMotors");
            obj.ConfigureLegsServiceClient = ros2svcclient(obj.Node,...
                "/starq/legs/conf", "starq_interfaces/ConfigureLegs");
            obj.RunLegTrajectoryActionClient = ros2actionclient(obj.Node,...
                "/starq/legs/run_trajectory", "starq_interfaces/RunLegTrajectory");
            obj.isInRecordingMode = false;
            obj.TrajectoryActionRecording = [];
            obj.RecordingLength = 0;
            obj.FeedbackRate = 50; % Hz
        end

        function sendLegTrajectory(obj, goalMsg, record)
            arguments
                obj
                goalMsg
                record = false
            end
            cllbckOptions = ros2ActionSendGoalOptions(...
                FeedbackFcn=@obj.runLegTrajectoryFeedbackCallback,...
                ResultFcn=@obj.runLegTrajectoryResultCallback);
            if (waitForServer(obj.RunLegTrajectoryActionClient, 'Timeout', 1) == 1)
                if (record)
                    obj.startRecording(goalMsg);
                end
                obj.RunLegTrajectoryActionGoalHandle = ...
                    sendGoal(obj.RunLegTrajectoryActionClient, goalMsg, cllbckOptions);
            else
                disp("Could not connect to RunLegTrajectoryActionClient");
            end
        end

        function sendMotorConfigs(obj, confMsg)
            if (waitForServer(obj.ConfigureMotorsServiceClient, 'Timeout', 1) == 1)
                call(obj.ConfigureMotorsServiceClient, confMsg);
            else
                disp("Could not connect to ConfigureMotorsServiceClient");
            end
        end

        function sendLegConfigs(obj, confMsg)
            if (waitForServer(obj.ConfigureLegsServiceClient, 'Timeout', 1) == 1)
                call(obj.ConfigureLegsServiceClient, confMsg);
            else
                disp("Could not connect to ConfigureLegsServiceClient");
            end
        end

        function updateMotorConfigs(obj)
            msg = ros2message("starq_interfaces/ConfigureMotorsRequest");
            msg.configs = obj.MotorConfigs;
            obj.sendMotorConfigs(msg);
        end

        function updateLegConfigs(obj)
            msg = ros2message("starq_interfaces/ConfigureLegsRequest");
            msg.configs = obj.LegConfigs;
            obj.sendLegConfigs(msg);
        end

        function clearErrors(obj)
            obj.updateMotorConfigs();
        end

        function cancelTrajectory(obj)
            cancelGoal(obj.RunLegTrajectoryActionClient,...
                obj.RunLegTrajectoryActionGoalHandle);
        end

        function ready(obj)
            for m = 1:length(obj.MotorConfigs)
                obj.MotorConfigs(m).requested_state = uint32(8);
            end
            obj.updateMotorConfigs();
        end

        function idle(obj)
            for m = 1:length(obj.MotorConfigs)
                obj.MotorConfigs(m).requested_state = uint32(1);
            end
            obj.updateMotorConfigs();
        end

        function [time, motor_pos, motor_vel, motor_trq, ...
                    motor_pos_err, motor_vel_err, motor_trq_err,...
                    motor_qcurrent, bus_current, bus_voltage, motor_temp...
                 ] = recordingResults(obj)
            record = obj.TrajectoryActionRecording;
            record_size = length(record);
            motors_count = length(obj.MotorConfigs);
            time = linspace(0,(1/obj.FeedbackRate)*record_size, record_size);
            motor_pos = nan(motors_count, record_size);
            motor_vel = nan(motors_count, record_size);
            motor_trq = nan(motors_count, record_size);
            motor_pos_err = nan(motors_count, record_size);
            motor_vel_err = nan(motors_count, record_size);
            motor_trq_err = nan(motors_count, record_size);
            motor_qcurrent = nan(motors_count, record_size);
            bus_current = nan(motors_count, record_size);
            bus_voltage = nan(motors_count, record_size);
            motor_temp = nan(motors_count, record_size);
            for r = 1:record_size
                motor_infos = record(r).latest_motor_info;
                for m = 1:length(motor_infos.infos)
                    info = motor_infos.infos(m);
                    motor_pos(r,m) = info.pos_estimate;
                    motor_vel(r,m) = info.vel_estimate;
                    motor_trq(r,m) = info.torque_estimate;
                    motor_pos_err(r,m) = info.pos_error;
                    motor_vel_err(r,m) = info.vel_error;
                    motor_trq_err(r,m) = info.torque_error;
                    motor_qcurrent(r,m) = info.iq_measured;
                    bus_current(r,m) = info.bus_current;
                    bus_voltage(r,m) = info.bus_voltage;
                    motor_temp(r,m) = info.motor_temperature;
                end
            end
        end
    end

    methods (Access=private)
        function runLegTrajectoryFeedbackCallback(obj, ~, msg)
            obj.RunLegTrajectoryActionLatestFeedback = msg;
            if (obj.isInRecordingMode)
                obj.RecordingLength = obj.RecordingLength + 1;
                obj.TrajectoryActionRecording(obj.RecordingLength) = msg;
            end
        end
        function runLegTrajectoryResultCallback(obj, ~, msg)
            obj.RunLegTrajectoryActionLatestResult = msg;
        end
        function startRecording(obj, goalMsg)
            obj.RecordingLength = 0;
            obj.TrajectoryActionRecording = [];
            feedback_size = numel(goalMsg.trajectory) * goalMsg.num_loops * obj.FeedbackRate / goalMsg.publish_rate;
            for i = feedback_size:-1:1
                obj.TrajectoryActionRecording(i) = ros2message("starq_interfaces/RunLegTrajectoryFeedback");
            end
            obj.isInRecordingMode = true;
        end
    end
end

