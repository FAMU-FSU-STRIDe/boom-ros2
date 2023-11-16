clc
clear
close all
%%

sim_time = 20;
initial_height = 0.25;

base_length = 0.40;
base_width = 0.25;
base_height = 0.086;
base_mass = 7.5;

leg_link1_length = 0.05;
leg_link1_width = 0.005;
leg_link1_height = 0.015;
leg_link1_mass = 0.15;

hip_xoff = 0.165;
hip_yoff = 0.5*base_width + 0.5*leg_link1_width;

leg_link2_length = 0.150;
leg_link2_width = 0.005;
leg_link2_height = 0.015;
leg_link2_mass = 0.15;

toe_radius = 0.02;
toe_width = 0.02;
toe_mass = 0.10;

generate_trajectory