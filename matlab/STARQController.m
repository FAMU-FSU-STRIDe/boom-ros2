classdef STARQController < handle
    
    properties
        Node
        ConfigureMotorsServiceClient
        ConfigureLegsServiceClient
        RunLegTrajectoryActionClient
        RunLegTrajectoryActionGoalHandle
        RunLegTrajectoryActionLatestFeedback
        RunLegTrajectoryActionLatestResult
    end
    
    methods (Access=public)
        function obj = STARQController()
            obj.Node = ros2node("starq_matlab_controller");
            obj.ConfigureMotorsServiceClient = ros2svcclient(obj.Node,...
                "/starq/motors/conf","starq_interfaces/ConfigureMotors");
            obj.ConfigureLegsServiceClient = ros2svcclient(obj.Node,...
                "/starq/legs/conf", "starq_interfaces/ConfigureLegs");
            [obj.RunLegTrajectoryActionClient, ~] = ros2actionclient(obj.Node,...
                "/starq/legs/run_trajectory", "starq_interfaces/RunLegTrajectory");

        end

        function sendTrajectory(obj, goalMsg)
            cllbckOptions = ros2ActionSendGoalOptions(...
                FeedbackFcn=@obj.runLegTrajectoryFeedbackCallback,...
                ResultFcn=@obj.runLegTrajectoryResultCallback);
            obj.RunLegTrajectoryActionGoalHandle = ...
                sendGoal(obj.RunLegTrajectoryActionClient, goalMsg, cllbckOptions);
        end

        function configureMotors(obj, confMsg)
            call(obj.ConfigureMotorsServiceClient, confMsg)
        end

        function configureLegs(obj, confMsg)
            call(obj.ConfigureLegsServiceClient, confMsg);
        end
    end

    methods (Access=private)
        function runLegTrajectoryFeedbackCallback(obj, msg)
            obj.RunLegTrajectoryActionLatestFeedback = msg;
        end
        function runLegTrajectoryResultCallback(obj, msg)
            obj.RunLegTrajectoryActionLatestResult = msg;
        end
    end
end

