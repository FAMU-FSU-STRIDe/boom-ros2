classdef TrajectoryPublisher < handle
    
    properties
        Node
        RunLegTrajectoryActionClient
        RunLegTrajectoryActionGoalHandle
        RunLegTrajectoryActionLatestFeedback
        RunLegTrajectoryActionLatestResult
    end
    
    methods
        function obj = TrajectoryPublisher(node)
            obj.Node = node;
            obj.RunLegTrajectoryActionClient = ros2actionclient(obj.Node,...
                "/starq/legs/run_trajectory", "starq_interfaces/RunLegTrajectory");
        end

        function sendLegTrajectory(obj, trajectory, num_loops, publish_rate)
            goalMsg = matrixToRunLegTrajectoryGoal(trajectory, num_loops, publish_rate);
            cllbckOptions = ros2ActionSendGoalOptions(...
                FeedbackFcn=@obj.runLegTrajectoryFeedbackCallback,...
                ResultFcn=@obj.runLegTrajectoryResultCallback);
            if (waitForServer(obj.RunLegTrajectoryActionClient, 'Timeout', 1) == 1)
                obj.RunLegTrajectoryActionGoalHandle = ...
                    sendGoal(obj.RunLegTrajectoryActionClient, goalMsg, cllbckOptions);
            else
                disp("TrajectoryPublisher: Could not connect to RunLegTrajectoryActionClient");
            end
        end

        function cancelTrajectory(obj)
            cancelGoal(obj.RunLegTrajectoryActionClient,...
                obj.RunLegTrajectoryActionGoalHandle);
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

