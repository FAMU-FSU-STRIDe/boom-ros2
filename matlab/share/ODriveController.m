classdef ODriveController < handle
    
    properties
        Node
        NumberOfMotors
        Configs
        ServiceClient
        Recorder
        Publisher
    end
    
    methods
        function obj = ODriveController(node, num_motors)
            arguments
                node
                num_motors {mustBeInteger} = 1
            end
            obj.Node = node;
            obj.NumberOfMotors = num_motors;
            obj.Configs= repmat(ros2message("starq_interfaces/ODriveConfig"), ...
                obj.NumberOfMotors, 1);
            for i = 1:obj.NumberOfMotors
                obj.Configs(i) = defaultODriveConfig(i-1, i-1);
            end
            obj.ServiceClient = ros2svcclient(obj.Node,...
                "/starq/motors/conf","starq_interfaces/ConfigureMotors");
            obj.Recorder = TopicRecorder(obj.Node, ...
                "/starq/motors/info", "starq_interfaces/ODriveInfoArray");
            obj.Publisher = ros2publisher(obj.Node, ...
                "/starq/motors/cmd", "starq_interfaces/ODriveCommandArray");
        end

        function setStates(obj, states)
            obj.setAll('requested_state', states, 'uint32', true);
        end

        function setControlModes(obj, modes)
            obj.setAll('control_mode', modes, 'uint32', true);
        end

        function setInputModes(obj, modes)
            obj.setAll('input_mode', modes, 'uint32', true);
        end

        function setVelocityLimits(obj, limits)
            obj.setAll('velocity_limit', limits, 'single', true);
        end

        function setCurrentLimits(obj, limits)
            obj.setAll('current_limit', limits, 'single', true);
        end

        function setPGains(obj, pgains)
            obj.setAll('position_gain', pgains, 'single', true);
        end

        function setVGains(obj, vgains)
            obj.setAll('velocity_gain', vgains, 'single', true);
        end

        function setVIGains(obj, vigains)
            obj.setAll('velocity_integrator_gain', vigains, 'single', true);
        end

        function setGains(obj, pgains, vgains, vigains)
            obj.setAll('position_gain', pgains, 'single', false);
            obj.setAll('velocity_gain', vgains, 'single', false);
            obj.setAll('velocity_integrator_gain', vigains, 'single', true);
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
            msg = ros2message("starq_interfaces/ODriveCommandArray");
            if (length(positions) == obj.NumberOfMotors)
                for p = 1:obj.NumberOfMotors
                    msg.commands(p).input_position = single(positions(p));
                    msg.commands(p).input_velocity = single(0);
                    msg.commands(p).input_torque = single(0);
                end
                send(obj.Publisher, msg);
            else
                disp("ODriveController: Incorrect number of positions");
            end
        end

        function setVelocities(obj, velocities)
            msg = ros2message("starq_interfaces/ODriveCommandArray");
            if (length(velocities) == obj.NumberOfMotors)
                for m = 1:obj.NumberOfMotors
                    msg.commands(m).input_position = single(0);
                    msg.commands(m).input_velocity = single(velocities(m));
                    msg.commands(m).input_torque = single(0);
                end
                send(obj.Publisher, msg);
            else
                disp("ODriveController: Incorrect number of velocities");
            end
        end

        function setTorques(obj, torques)
            msg = ros2message("starq_interfaces/ODriveCommandArray");
            if (length(torques) == obj.NumberOfMotors)
                for m = 1:obj.NumberOfMotors
                    msg.commands(m).input_position = single(0);
                    msg.commands(m).input_velocity = single(0);
                    msg.commands(m).input_torque = single(torques(m));
                end
                send(obj.Publisher, msg);
            else
                disp("ODriveController: Incorrect number of torques");
            end
        end

    end

    methods (Access=private)

        function sendConfigs(obj)
            msg = ros2message("starq_interfaces/ConfigureMotorsRequest");
            msg.configs = obj.Configs;
            if (waitForServer(obj.ServiceClient, 'Timeout', 1) == 1)
                call(obj.ServiceClient, msg);
            else
                disp("ODriveController: Could not connect to ServiceClient");
            end
        end

        function setAll(obj, field, values, type, update)
            if (length(values) == 1)
                values = values * ones(1, obj.NumberOfMotors);
            end
            if (length(values) == obj.NumberOfMotors)
                for m = 1:obj.NumberOfMotors
                    obj.Configs(m).(field) = cast(values(m), type);
                end
                if (update)
                    obj.sendConfigs();
                end
            else
                disp(strcat("ODriveController: Incorrect number of ", field, "s"));
            end
        end

    end

end

