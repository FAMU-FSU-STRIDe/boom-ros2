classdef ODriveController < handle
    
    properties
        Node
        NumberOfMotors
        ODriveConfigs
        ConfigureMotorsServiceClient
        %ODriveInfoRecorder
        ODriveCommandPublisher
        ODriveInfoRate
    end
    
    methods
        function obj = ODriveController(node, num_motors)
            arguments
                node
                num_motors {mustBeInteger} = 1
            end
            obj.Node = node;
            obj.NumberOfMotors = num_motors;
            obj.ODriveConfigs= repmat(ros2message("starq_interfaces/ODriveConfig"), ...
                obj.NumberOfMotors, 1);
            for i = 1:obj.NumberOfMotors
                obj.ODriveConfigs(i) = defaultODriveConfig(i-1, i-1);
            end
            obj.ConfigureMotorsServiceClient = ros2svcclient(obj.Node,...
                "/starq/motors/conf","starq_interfaces/ConfigureMotors");
            % obj.ODriveInfoRecorder = TopicRecorder(obj.Node, ...
            %     "/starq/motors/info", "starq_interfaces/ODriveInfoArray");
            obj.ODriveCommandPublisher = ros2publisher(obj.Node, ...
                "/starq/motors/cmd", "starq_interfaces/ODriveCommandArray");
            obj.ODriveInfoRate = 50; % Hz
        end

        function setStates(obj, states)
            obj.setAll('requested_state', states, 'uint32');
        end

        function setControlModes(obj, modes)
            obj.setAll('control_mode', modes, 'uint32');
        end

        function setInputModes(obj, modes)
            obj.setAll('input_mode', modes, 'uint32');
        end

        function setVelocityLimits(obj, limits)
            obj.setAll('velocity_limit', limits, 'single');
        end

        function setCurrentLimits(obj, limits)
            obj.setAll('current_limit', limits, 'single');
        end

        function setPGains(obj, pgains)
            obj.setAll('position_gain', pgains, 'single');
        end

        function setVGains(obj, vgains)
            obj.setAll('velocity_gain', vgains, 'single');
        end

        function setVIGains(obj, vigains)
            obj.setAll('velocity_integrator_gain', vigains, 'single');
        end

        function ready(obj)
            obj.setStates(8);
        end

        function idle(obj)
           obj.setStates(1);
        end

        function estop(obj)
           obj.setStates(0);
        end

        function clearErrors(obj)
            obj.idle()
        end

        % function startRecording(obj, expected_size)
        %     arguments
        %         obj
        %         expected_size {mustBeNumeric} = 1
        %     end
        %     obj.ODriveInfoRecorder.startRecording(expected_size);
        % end
        % 
        % function stopRecording(obj)
        %     obj.ODriveInfoRecorder.stopRecording();
        % end

        function goToPosition(obj, positions)
            msg = ros2message("starq_interfaces/ODriveCommandArray");
            if (length(positions) == obj.NumberOfMotors)
                for p = 1:obj.NumberOfMotors
                    msg.commands(p).input_position = positions(p);
                end
                send(obj.ODriveCommandPublisher, msg);
            else
                disp("ODriveController: Incorrect number of positions");
            end
        end

    end

    methods (Access=private)

        function sendConfigs(obj)
            msg = ros2message("starq_interfaces/ConfigureMotorsRequest");
            msg.configs = obj.ODriveConfigs;
            if (waitForServer(obj.ConfigureMotorsServiceClient, 'Timeout', 1) == 1)
                call(obj.ConfigureMotorsServiceClient, msg);
            else
                disp("ODriveController: Could not connect to ConfigureMotorsServiceClient");
            end
        end

        function setAll(obj, field, values, type)
            if (length(values) == 1)
                values = values * ones(1, obj.NumberOfMotors);
            end
            if (length(values) == obj.NumberOfMotors)
                for m = 1:obj.NumberOfMotors
                    obj.ODriveConfigs(m).(field) = cast(values(m), type);
                end
                obj.sendConfigs();
            else
                disp(strcat("ODriveController: Incorrect number of ", field, "s"));
            end
        end

    end

end

