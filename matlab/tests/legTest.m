clear
close all
clc

%% Legtest for L3Harris
node = ros2node("test_matlab");
odrv = ODriveController(node,2);
odrv.setControlModes([3 3]);
odrv.setGains([5 5], [0.15, 0.15], [0.30, 0.30]);

odrv.ready;