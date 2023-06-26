%% Encoder error bug
close all
clear

hop_maker

% Set run parameters
stride_frequency = 2.5; % Hz
num_loops = 5;

% Create connection to boom ROS network
boom = BoomController();

% Put motors in control mode
boom.ready();

% Run and record gait
boom.recordPointTrajectory(trajectory, stride_frequency, num_loops);

% Pause until the action is done
period = num_loops / stride_frequency; % s
pause(period + 1.0);

% Get results from recording
[time, motor_pos, motor_vel, motor_trq,...
    motor_pos_err, motor_vel_err, motor_trq_err,...
    motor_qcurrent, bus_current, bus_voltage,...
    fet_temp, motor_temp] = boom.recordingResults();

motor_cmd = motor_pos_err + motor_pos;

% Plot results
figure()
hold on
plot(time, motor_cmd(:,1), '--k');
plot(time, motor_pos(:,1), '-r');
xlabel("Time (s)")
ylabel("Position (rev)")
legend(["Commanded", "Encoder Estimate"])

% Put motors in idle mode
boom.idle()

clear boom