close all
%%

playback = boom.RunLegTrajectoryActionRecording;
size = length(playback);

motor_pos = nan(size, 2);
motor_vel = nan(size, 2);
motor_trq = nan(size, 2);

motor_pos_err = nan(size, 2);
motor_vel_err = nan(size, 2);
motor_trq_err = nan(size, 2);

feedback_rate = 20; % Hz
t = linspace(0,(1/feedback_rate)*size, size);
% T = (1/stride_frequency) * loops

% parse
for p = 1:size
    motor_infos = playback(p).latest_motor_info;
    for m = 1:length(motor_infos.infos)
        info = motor_infos.infos(m);
        motor_pos(p,m) = info.pos_estimate;
        motor_vel(p,m) = info.vel_estimate;
        motor_trq(p,m) = info.torque_estimate;
        motor_pos_err(p,m) = info.pos_error;
        motor_vel_err(p,m) = info.vel_error;
        motor_trq_err(p,m) = info.torque_error;
    end
end

figure()
subplot(3,1,1)
plot(t,motor_pos)
ylabel("Position (rev)")
subplot(3,1,2)
plot(t,motor_vel)
ylabel("Velocity (rev/s)")
subplot(3,1,3)
plot(t,motor_trq)
ylabel("Torque (Nm)")
xlabel("Time (s)")
sgtitle("Motor Estimates")

figure()
plot(t,motor_pos_err)
ylabel("\Delta Position (rev)")
xlabel("Time (s)")
title("Motor Position Error")