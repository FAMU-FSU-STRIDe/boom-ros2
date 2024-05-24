%% Hop trajectory
close all
clear boom
addpath('share');

% NOTE:
% Run trajectory generation before this script
% Examples: 'hop_maker', 'square_maker'
% Make sure variable 'trajectory' is defined

% Set run parameters
stride_frequency = 0.5; % Hz
num_loops = 4;

% Create connection to boom ROS network
boom = BoomController();

% Put motors in control mode
boom.ready();

% Hold zero
boom.Motors.goToPosition([0 0]);
pause(3.0)

% Start recording
boom.startRecording(floor(num_loops / stride_frequency * 50));

% Run point trajectory
boom.runPointTrajectory(trajectory, stride_frequency, num_loops);

% Pause until the action is done
period = num_loops / stride_frequency; % s
pauseSafe(boom, period + 1.0);

% Stop recording
boom.stopRecording();

% Reset to zero
boom.Motors.goToPosition([0 0]);
pause(3.0)

% Put motors in idle mode
boom.idle()

% Get results from recording
motor_data = parseMotorData(boom.MotorData);

% Get results from boom encoders
boom_data = parseBoomData(boom.BoomData);

% Get results from leg kinematics
leg_data = parseLegData(boom.LegData);

% Plot results
figure()
hold on
plot(motor_data.time, motor_data.motor_pos_cmd(:,1), '--k');
plot(motor_data.time, motor_data.motor_pos(:,1), '-r');
xlabel("Time (s)")
ylabel("Position (rev)")
legend(["Commanded", "Encoder Estimate"])

figure()
hold on
plot(trajectory(1,:), trajectory(2,:), '--k');
plot(leg_data.pos_est(1,:), leg_data.pos_est(2,:), '-g');
xlabel("X (mm)")
ylabel("Y (mm)")
legend(["Commanded", "Estimate"])

figure()
hold on
plot(motor_data.time, motor_data.motor_temp(:,1), 'r');
plot(motor_data.time, motor_data.motor_temp(:,2), 'b');
xlabel("Time (s)")
ylabel("Temperature (C)")
legend(["Motor 0", "Motor 1"])

figure()
hold on
plot(motor_data.time, motor_data.motor_qcurrent);
xlabel("Time (s)")
ylabel("QCurrent (A)")