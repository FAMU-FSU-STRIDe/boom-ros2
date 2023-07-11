%% Params

N = 500;

height = 80;
width = 80;
center = [0; -150];

%% Create square

top_edge = [
  linspace(center(1)-width/2, center(1)+width/2, N/4);
  linspace(center(2)+height/2, center(2)+height/2, N/4)
];
right_edge = [
  linspace(center(1)+width/2, center(1)+width/2, N/4);
  linspace(center(2)+height/2, center(2)-height/2, N/4)
];
bottom_edge = [
  linspace(center(1)+width/2, center(1)-width/2, N/4);
  linspace(center(2)-height/2, center(2)-height/2, N/4)
];
left_edge = [
  linspace(center(1)-width/2, center(1)-width/2, N/4);
  linspace(center(2)-height/2, center(2)+height/2, N/4)
];

trajectory = [top_edge, right_edge, bottom_edge, left_edge];

%% Plot square

figure()
plot(trajectory(1,:), trajectory(2,:))
