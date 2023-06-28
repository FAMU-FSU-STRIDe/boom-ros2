%% Hop trajectory
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

% Run point trajectory
boom.runPointTrajectory(trajectory, stride_frequency, num_loops);

% Pause until the action is done
period = num_loops / stride_frequency; % s
pause(period + 1.0);

% Get results from recording
[motor_pos, motor_vel, motor_trq,...
    motor_pos_cmd, motor_vel_cmd, motor_trq_cmd,...
    motor_qcurrent, bus_current, bus_voltage,...
    fet_temp, motor_temp] = boom.motorData();

time = linspace(0,period, size(motor_pos,1));

% Get results from boom encoders
[orientation, tilt, height, speed] = boom.boomEncodersData();

% Plot results
figure()
hold on
plot(time, motor_pos_cmd(:,1), '--k');
plot(time, motor_pos(:,1), '-r');
xlabel("Time (s)")
ylabel("Position (rev)")
legend(["Commanded", "Encoder Estimate"])

% Put motors in idle mode
boom.idle()