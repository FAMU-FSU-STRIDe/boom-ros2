%% Example gait trajectory for BoomController
close all
clear boom

% Generate trajectory
trajectory = [];
% trajectory = [ x0, x1, x2, x3, ... , xn;
%                y0, y1, y2, y3, ... , yn];

% Set run parameters
stride_frequency = 1.0; % Hz
num_loops = 10;

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

% Plot results
figure()
hold on
plot(time, motor_pos);
xlabel("Time (s)")
ylabel("Position (rev)")
legend(["Motor0", "Motor1"])

% Put motors in idle mode
boom.idle()