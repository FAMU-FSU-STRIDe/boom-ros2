%% Hop trajectory
close all
clear

% Run hop_maker.m for trajectory
hop_maker

% Set run parameters
stride_frequency = 2.5; % Hz
num_loops = 5;

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
[mtime, motor_pos, motor_vel, motor_trq,...
    motor_pos_cmd, motor_vel_cmd, motor_trq_cmd,...
    motor_qcurrent, bus_current, bus_voltage,...
    fet_temp, motor_temp] = parseMotorData(boom.MotorData);

% Get results from boom encoders
[btime, orientation, tilt, height, speed] = parseBoomData(boom.BoomData);

% Plot results
figure()
hold on
plot(mtime, motor_pos_cmd(:,1), '--k');
plot(mtime, motor_pos(:,1), '-r');
xlabel("Time (s)")
ylabel("Position (rev)")
legend(["Commanded", "Encoder Estimate"])

% Put motors in idle mode
boom.idle()