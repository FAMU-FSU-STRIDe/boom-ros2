thetaA = motor_data.motor_pos(:,1).';
thetaB = motor_data.motor_pos(:,2).';

alpha = 0.5 * (pi + thetaA / 6 - thetaB / 6);
gamma = asin(66 * sin(alpha) / 150);
phi = pi - alpha  - gamma;

theta = thetaA - alpha
R = 150 * sin(phi) ./ sin(alpha)

x = R .* cos(theta)
y = R .* sin(theta)

plot(x,y)