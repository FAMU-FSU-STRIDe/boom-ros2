clear boom
close all
%% PARAMS

PGAIN_LOAD = 10; % springy
PGAIN_THRUST = 30; % stiff
PGAIN_RETURN = 15; % middle
PGAIN_LAND = 3; % springy
PGAIN_STAND = 15; % middle

VGAIN = 0.015;
VIGAIN = 0.5;

%%

h_stand = -145; % mm
h_load = -110; % mm
h_extend = -175; % mm

load_time = 0.20; % s
extend_time = 0.30; % s
return_time = 0.40; % s
land_time = 0.60; % s
end_time = 0.80; %s

%%

boom = BoomController();
boom.Motors.setGains(PGAIN_STAND, VGAIN, VIGAIN)

boom.ready()

num_loops = 3;
total_time = num_loops * end_time;
boom.startRecording(total_time * 50)
for n = 1:num_loops
    tic

    boom.Motors.setPGains(PGAIN_STAND)
    boom.Legs.goToPosition([0 ; h_stand]) % start in stand
    pause(load_time - toc)

    boom.Motors.setPGains(PGAIN_LOAD)
    boom.Legs.goToPosition([0 ; h_load])
    pause(extend_time - toc)

    boom.Motors.setPGains(PGAIN_THRUST)
    boom.Legs.goToPosition([0 ; h_extend])
    pause(return_time - toc)

    boom.Motors.setPGains(PGAIN_RETURN)
    boom.Legs.goToPosition([0 ; h_stand]) % end in stand
    pause(land_time - toc)

    boom.Motors.setPGains(PGAIN_LAND)
    pause(end_time - toc)
end
boom.stopRecording()

pause(1.0)
boom.idle()

%%

motor_data = parseMotorData(boom.MotorData);

% Motor command vs. actual
figure()
hold on
plot(motor_data.time, motor_data.motor_pos_cmd(:,1), '--k');
plot(motor_data.time, motor_data.motor_pos(:,1), '-r');
xlabel("Time (s)")
ylabel("Position (rev)")
legend(["Commanded", "Encoder Estimate"])

% Temperatures
figure()
plot(motor_data.time, motor_data.motor_temp);
xlabel("Time (s)")
ylabel("Temperature (C)")
legend(["Motor 0 Temp", "Motor 1 Temp"])

figure()
hold on
plot(motor_data.time, motor_data.fet_temp);
xlabel("Time (s)")
ylabel("Temperature (C)")
legend(["FET 0 Temp", "FET 1 Temp"])

