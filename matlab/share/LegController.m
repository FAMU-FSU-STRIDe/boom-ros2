classdef LegController < handle
    
    properties
        Node
        NumberOfLegs
        Configs
        ServiceClient
        Recorder
        Publisher
    end
    
    methods
        function obj = LegController(node, num_legs)
            arguments
                node
                num_legs {mustBeInteger} = 1
            end
            obj.Node = node;
            obj.NumberOfLegs = num_legs;
            obj.Configs = repmat(ros2message("boom_interfaces/LegConfig"), ...
                obj.NumberOfLegs, 1);
            for i = 1:obj.NumberOfLegs
                obj.Configs(i) = defaultFiveBar2DLegConfig(i-1, [2*(i-1), 2*(i-1)+1]);
            end
            obj.ServiceClient = ros2svcclient(obj.Node,...
                "/boom/legs/conf","boom_interfaces/ConfigureLegs");
            obj.Recorder = TopicRecorder(obj.Node, ...
                "/boom/legs/info", "boom_interfaces/LegInfoArray");
            obj.Publisher = ros2publisher(obj.Node, ...
                "/boom/legs/cmd", "boom_interfaces/LegCommandArray");
        end
        
        function setKinematicType(obj, id, type)
            obj.Configs(id).kinematic_type = char(type);
        end

        function setMotorIDs(obj, id, ids)
            obj.Configs(id).motor_ids = uint8(ids);
        end

        function ready(obj)
            obj.sendConfigs();
        end

        function startRecording(obj, expected_size)
            arguments
                obj
                expected_size {mustBeNumeric} = 1
            end
            obj.Recorder.startRecording(expected_size);
        end

        function stopRecording(obj)
            obj.Recorder.stopRecording();
        end

        function goToPosition(obj, positions)
            msg = ros2message("boom_interfaces/LegCommandArray");
            if (size(positions, 2) == obj.NumberOfLegs)
                for p = 1:obj.NumberOfLegs
                    msg.commands(p).input_pos = single(positions(:,p));
                end
                send(obj.Publisher, msg);
            else
                disp("LegController: Incorrect number of positions");
            end
        end

    end

    methods (Access=private)

        function sendConfigs(obj)
            msg = ros2message("boom_interfaces/ConfigureLegsRequest");
            msg.configs = obj.Configs;
            if (waitForServer(obj.ServiceClient, 'Timeout', 1) == 1)
                call(obj.ServiceClient, msg);
            else
                disp("LegController: Could not connect to ServiceClient");
            end
        end

    end
end

