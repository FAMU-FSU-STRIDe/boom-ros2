classdef BoomController < BaseController
    
    properties
    end

    methods
        function obj = BoomController()
            obj@BaseController();
            obj.MotorConfigs = [...
                defaultMotorConfig(0, 0),...
                defaultMotorConfig(1, 1)];
            obj.LegConfigs = defaultFiveBar2DLegConfig(0);
            if (waitForServer(obj.ConfigureMotorsServiceClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to ConfigureMotorsServiceClient");
            else
                obj.updateMotorConfigs()
            end
            if (waitForServer(obj.ConfigureLegsServiceClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to ConfigureLegsServiceClient");
            else
                obj.updateLegConfigs()
            end
            if (waitForServer(obj.RunLegTrajectoryActionClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to RunLegTrajectoryActionClient");
            end
        end

        function sendPointTrajectory(obj, points)
            
        end
    end

end

