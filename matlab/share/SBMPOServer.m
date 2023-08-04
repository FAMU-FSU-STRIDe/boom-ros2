classdef SBMPOServer < handle
    
    properties
        Node
        ActionClient
        GoalHandle
        LatestFeedback
        LatestResult
        isBusy
    end
    
    methods
        function obj = SBMPOServer(node)
            obj.Node = node;
            obj.ActionClient = ros2actionclient(obj.Node, ...
                "/run_starq_sbmpo", "sbmpo_msgs/RunSBMPO");
            obj.isBusy = false;
        end

        function cancelAction(obj)
            cancelGoal(obj.ActionClient, obj.GoalHandle);
        end
        
        function RunSBMPO(obj, parametersMsg)
            cllbckOptions = ros2ActionSendGoalOptions(FeedbackFcn=@obj.feedbackCallback, ResultFcn=@obj.resultCallback);
            if (waitForServer(obj.ActionClient, 'Timeout', 1) == 1)
                obj.GoalHandle = sendGoal(obj.ActionClient, parametersMsg, cllbckOptions);
                obj.isBusy = true;
            else
                disp("SBMPOServer: Could not connect to ActionClient");
            end
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

