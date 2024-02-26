clc
clear
close all
%%

% Read from file
mat = readmatrix("trajectories/latestFootSpace.csv");
trajectory = mat(:,2:3)';

% y bounds
maxy = -110;
miny = -185;

% interpolate to fit between min and max
y = trajectory(2,:);
% trajectory(2,:) = maxy + (y - max(y)) * (miny - maxy) / (min(y) - max(y));

% flip x-axis
trajectory(1,:) = trajectory(1,:);