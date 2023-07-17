clc
clear
close all
%%

% boom = BoomController();
% ^ broken

p_start = 25.0;
p_end = 0.1;
num_iters = 100;

pgains = linspace(p_start, p_end, num_iters);

freq = 10;
for p = 1:length(pgains)
    
    pgain = pgains(p);
    disp(strcat("Setting P Gain to ", num2str(pgain), "."))

    % boom.Motors.setPGains(pgain);

    pause(1/freq)
end