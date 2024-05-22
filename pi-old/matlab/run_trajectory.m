%% Hop trajectory
close all
clear boom
addpath('share')

% NOTE:
% Run trajectory generation before this script
% Examples: 'hop_maker', 'square_maker'
% Make sure variable 'trajectory' is defined

% Set run parameters
stride_frequency = 0.25; % Hz
num_loops = 2;

% Create connection to boom ROS network
boom = BoomController();

% Put motors in control mode
boom.ready();

% Start recording
boom.startRecording(num_loops / stride_frequency * 50);

% Run point trajectory
boom.runPointTrajectory(trajectory, stride_frequency, num_loops);

% Pause until the action is done
period = num_loops / stride_frequency; % s
pause(period + 1.0);

% Stop recording
boom.stopRecording();

% Get results from recording
motor_data = parseMotorData(boom.MotorData);

% Get results from boom encoders
boom_data = parseBoomData(boom.BoomData);

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

% Put motors in idle mode
boom.idle()