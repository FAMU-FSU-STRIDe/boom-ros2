classdef LegController < handle
    
    properties
        Node
        NumberOfLegs
        LegConfigs
        ConfigureLegsServiceClient
        LegInfoRecorder
        LegCommandPublisher
        LegInfoRate
    end
    
    methods
        function obj = LegController(node, num_legs)
            arguments
                node
                num_legs {mustBeInteger} = 1
            end
            obj.Node = node;
            obj.NumberOfLegs = num_legs;
            obj.LegConfigs= repmat(ros2message("starq_interfaces/LegConfig"), ...
                obj.NumberOfLegs, 1);
            for i = obj.NumberOfLegs:-1:1
                obj.LegConfigs(i) = defaultFiveBar2DLegConfig(i, [2*i-1, 2*i]);
            end
            obj.ConfigureLegsServiceClient = ros2svcclient(obj.Node,...
                "/starq/legs/conf","starq_interfaces/ConfigureLegs");
            obj.LegInfoRecorder = TopicRecorder(obj.Node, ...
                "/starq/legs/info", "starq_interfaces/LegInfoArray");
            obj.LegCommandPublisher = ros2publisher(obj.Node, ...
                "/starq/legs/cmd", "starq_interfaces/LegCommandArray");
            obj.LegInfoRate = 50; % Hz
        end
        
        function setKinematicType(obj, id, type)
            obj.LegConfigs(id).kinematic_type = char(type);
        end

        function setMotorIDs(obj, id, ids)
            obj.LegConfigs(id).motor_ids = uint8(ids);
        end

        function ready(obj)
            obj.sendConfigs();
        end

        function startRecording(obj, expected_size)
            arguments
                obj
                expected_size {mustBeNumeric} = 1
            end
            obj.LegInfoRecorder.startRecording(expected_size);
        end

        function stopRecording(obj)
            obj.LegInfoRecorder.stopRecording();
        end

        % function [] = recordingData(obj)

        function goToPosition(obj, positions)
            msg = ros2message("starq_interfaces/LegCommandArray");
            if (length(positions) == obj.NumberOfLegs)
                for p = 1:obj.NumberOfLegs
                    msg.commands(p).input_pos = positions(:,p);
                end
                send(obj.LegCommandPublisher, msg);
            else
                disp("LegController: Incorrect number of positions");
            end
        end

    end

    methods (Access=private)

        function sendConfigs(obj)
            msg = ros2message("starq_interfaces/ConfigureLegsRequest");
            msg.configs = obj.LegConfigs;
            if (waitForServer(obj.ConfigureLegsServiceClient, 'Timeout', 1) == 1)
                call(obj.ConfigureLegsServiceClient, msg);
            else
                disp("LegController: Could not connect to ConfigureLegsServiceClient");
            end
        end

    end
end

