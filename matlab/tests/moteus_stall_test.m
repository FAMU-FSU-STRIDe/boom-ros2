clc
clear
close all
%%

node = ros2node("starq_matlab_node");
odrive = ODriveController(node, 1);

