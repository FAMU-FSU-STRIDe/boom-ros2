classdef MotorTrajectoryPublisher < handle
    
    properties
        Node
        ActionClient
        GoalHandle
        LatestFeedback
        LatestResult
        isBusy
    end
    
    methods
        function obj = MotorTrajectoryPublisher(node)
            obj.Node = node;
            obj.ActionClient = ros2actionclient(obj.Node,...
                "/boom/motors/run_trajectory", "boom_interfaces/RunMotorTrajectory");
            obj.isBusy = false;
        end

        function sendMotorTrajectory(obj, trajectory, num_loops, publish_rate)
            goalMsg = matrixToMotorTrajectoryGoal(trajectory, num_loops, publish_rate);
            cllbckOptions = ros2ActionSendGoalOptions(FeedbackFcn=@obj.feedbackCallback, ResultFcn=@obj.resultCallback);
            if (waitForServer(obj.ActionClient, 'Timeout', 1) == 1)
                obj.GoalHandle = sendGoal(obj.ActionClient, goalMsg, cllbckOptions);
                obj.isBusy = true;
            else
                disp("MotorTrajectoryPublisher: Could not connect to ActionClient");
            end
        end

        function cancelTrajectory(obj)
            cancelGoal(obj.ActionClient, obj.GoalHandle);
        end
        
    end

    methods (Access=private)
        function feedbackCallback(obj, ~, msg)
            obj.LatestFeedback = msg;
        end
        function resultCallback(obj, ~, msg)
            obj.LatestResult = msg;
            obj.isBusy = false;
        end
    end
end

