
GR1 = 6;
GR2 = 6;
L1 = 65;
L2 = 150;

X = trajectory(1,:);
Y = trajectory(2,:);

theta0 = atan2(-Y, X);
theta1 = atan2(-Y, -X);

R = sqrt(X.^2 + Y.^2);
alpha = acos((R.^2 + L1^2 - L2^2) / (2 * R * L1));

thetaA = theta0 - alpha;
thetaB = theta1 - alpha;

A = GR1 * thetaA / (2 * pi);
B = GR2 * thetaB / (2 * pi);

figure()
hold on
plot([A, A, A, A])
plot([B, B, B, B])