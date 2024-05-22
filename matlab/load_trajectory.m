clc
clear
close all
%%

% Read from file
mat = readmatrix("trajectories/latestFootSpace.csv");
trajectory = mat(:,2:3)';