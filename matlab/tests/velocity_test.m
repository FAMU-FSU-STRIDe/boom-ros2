clc
clear
close all
%%

PERIOD_ON = 20; % s
PERIOD_OFF = 0; % s
VELOCITY = 40; % rev/s

node = ros2node("velocity_test_matlab");
odrv = ODriveController(node, 1);
odrv.setControlModes(2);
odrv.setVelocityLimits(50)

odrv.ready
odrv.startRecording((PERIOD_ON + PERIOD_OFF) * 50)
odrv.setVelocities(VELOCITY)
pause(PERIOD_ON)
odrv.setVelocities(0)
pause(PERIOD_OFF)
odrv.stopRecording()

odrv.idle

mdata = parseMotorData(odrv.Recorder.Data);

figure()
hold on
grid on
plot(mdata.time, mdata.fet_temp, 'LineWidth', 3);
plot(mdata.time, mdata.motor_temp, 'LineWidth', 3);
%plot([PERIOD_ON PERIOD_ON], [min(mdata.motor_temp) max(mdata.fet_temp)], '--k', 'LineWidth', 1.5)
xlabel("Time (s)")
ylabel("Temperature (C)")
legend(["FET" "MOTOR"])

figure()
hold on
grid on
plot(mdata.time, mdata.motor_qcurrent);
xlabel("Time (s)")
ylabel("Current (A)")
