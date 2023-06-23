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
        end

        function sendLegTrajectory(obj, goalMsg)
            cllbckOptions = ros2ActionSendGoalOptions(...
                FeedbackFcn=@obj.runLegTrajectoryFeedbackCallback,...
                ResultFcn=@obj.runLegTrajectoryResultCallback);
            obj.RunLegTrajectoryActionGoalHandle = ...
                sendGoal(obj.RunLegTrajectoryActionClient, goalMsg, cllbckOptions);
        end

        function sendMotorConfigs(obj, confMsg)
            call(obj.ConfigureMotorsServiceClient, confMsg);
        end

        function sendLegConfigs(obj, confMsg)
            call(obj.ConfigureLegsServiceClient, confMsg);
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
    end

    methods (Access=private)
        function runLegTrajectoryFeedbackCallback(obj, ~, msg)
            obj.RunLegTrajectoryActionLatestFeedback = msg;
        end
        function runLegTrajectoryResultCallback(obj, ~, msg)
            obj.RunLegTrajectoryActionLatestResult = msg;
        end
    end
end

