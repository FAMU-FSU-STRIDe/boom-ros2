%% Params

stride_frequency = 2.5; % Hz
T = 1/stride_frequency;

N = 500;

V_thrust = 500; % mm/s
V_swing = 1000; % mm/s
V_return = 1000; % mm/s

L_touchdown = 150; % mm
L_liftoff = 200; % mm
L_swing = 105; % mm


%% Calculation

h = L_touchdown*ones(1,N);
t = linspace(0,T,N);

% thrust phase (1)
dh_thrust = L_liftoff - L_touchdown;
T_thrust = dh_thrust / V_thrust;
i_thrust = int32(T_thrust / T * N);
t_thrust = linspace(0,T_thrust,i_thrust);
h(1:i_thrust) = L_touchdown + (t_thrust/T_thrust).*(dh_thrust);

% swing phase (2)
dh_swing = L_swing - L_liftoff;
T_swing = -dh_swing / V_swing;
i_swing = int32(T_swing / T * N);
t_swing = -linspace(0,T_swing,i_swing);
h(i_thrust+1:i_thrust+i_swing) = L_liftoff - (t_swing/T_swing).*dh_swing;

% return phase (3)
dh_return = L_touchdown - L_swing;
T_return = dh_return / V_return;
i_return = int32(T_return / T * N);
t_return = linspace(0,T_return,i_return);
h(i_thrust+i_swing+1:i_thrust+i_swing+i_return) = L_swing + (t_return/T_return).*dh_return;

%% Visualize

figure
plot(t,h)


%% Save

x = zeros(1,N);
trajectory = [x; -h];