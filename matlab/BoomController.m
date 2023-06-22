classdef BoomController < STARQController
    
    properties
        LegConfig
        MotorConfigs
    end
    
    methods
        function obj = BoomController()
            obj.MotorConfigs = [...
                defaultMotorConfig(0, 0),...
                defaultMotorConfig(1,1)];
            obj.LegConfig = defaultFiveBar2DLegConfig(0);
            if (waitForServer(obj.ConfigureMotorsServiceClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to ConfigureMotorsServiceClient");
            else
                obj.updateMotorConfigurations()
            end
            if (waitForServer(obj.ConfigureLegsServiceClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to ConfigureLegsServiceClient");
            else
                obj.updateLegConfigurations()
            end
            if (waitForServer(obj.RunLegTrajectoryActionClient, 'Timeout', 3) ~= 1)
                disp("Could not connect to RunLegTrajectoryActionClient");
            end
        end

        function updateMotorConfigurations(obj)
            msg = ros2message("starq_interfaces/ConfigureMotorsRequest");
            msg.configs = obj.MotorConfigs;
            obj.configureMotors(msg);
        end

        function updateLegConfigurations(obj)
            msg = ros2message("starq_interfaces/ConfigureLegsRequest");
            msg.configs = obj.LegConfig;
            obj.configureLegs(msg);
        end
        
    end
end

