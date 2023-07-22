clear boom
close all
%% PARAMS

POS_GAIN = 30;
VEL_GAIN = 0.025;
VELINT_GAIN = 0.5;

NUM_HOPS = 500;

%% Hop generation

N = 100;

h_load = -110; % mm
h_extend = -180; % mm
h_stand = -120; % mm

pre_time = 0.25; % s
load_time = 0.1; % s
extend_time = 0.20; % s
post_time = 0.25; % s
period = pre_time + load_time + extend_time + post_time;

pre_N = int32(N*(pre_time/period));
load_N = int32(N*(load_time/period));
extend_N = int32(N*(extend_time/period));
post_N = int32(N*(post_time/period));

t = linspace(0,period,N);
x = zeros(1,N);
y = h_stand*ones(1,N);
y(1:pre_N) = h_stand;
y(pre_N + (1:load_N)) = h_load;
y(pre_N + load_N + (1:extend_N)) = h_extend;
y(pre_N + load_N + extend_N + (1:post_N)) = h_stand;

figure
plot(t,y)
axis([-inf inf -200 -100])
ylabel("Height (mm)")
xlabel("Time (s)")

%% Start Boom

boom = BoomController();

% Set Gains
boom.Motors.setPGains(POS_GAIN)
boom.Motors.setVGains(VEL_GAIN)
boom.Motors.setVIGains(VELINT_GAIN)

%% Run trajectory

% Params
trajectory = [x;y];
stride_frequency = 1/period;
num_loops = NUM_HOPS;

boom.ready();
boom.startRecording(ceil(num_loops / stride_frequency * 50));

% Run
boom.runPointTrajectory(trajectory, stride_frequency, num_loops);

period = num_loops / stride_frequency; % s
pause(period + 1.0);
boom.stopRecording();

boom.idle();

%% Results

motor_data = parseMotorData(boom.MotorData);
boom_data = parseBoomData(boom.BoomData);

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

