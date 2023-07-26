clc
clear
close all
%%

PERIOD_ON = 90; % s
PERIOD_OFF = 90; % s
TORQUE = -0.25; % N*m

node = ros2node("temperature_test_matlab");
odrv = ODriveController(node, 1);
odrv.setControlModes(1);

odrv.ready
odrv.startRecording((PERIOD_ON + PERIOD_OFF) * 50)
odrv.setTorques(TORQUE)
pause(PERIOD_ON)
odrv.setTorques(0)
pause(PERIOD_OFF)
odrv.stopRecording()

odrv.idle

mdata = parseMotorData(odrv.Recorder.Data);

figure()
hold on
grid on
plot(mdata.time, mdata.fet_temp, 'LineWidth', 3);
plot(mdata.time, mdata.motor_temp, 'LineWidth', 3);
plot([90 90], [22 40], '--k', 'LineWidth', 1.5)
xlabel("Time (s)")
ylabel("Temperature (C)")
legend(["FET" "MOTOR"])

figure()
hold on
grid on
plot(mdata.time, mdata.motor_qcurrent);
xlabel("Time (s)")
ylabel("Current (A)")
