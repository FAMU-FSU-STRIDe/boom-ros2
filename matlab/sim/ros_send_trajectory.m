node = ros2node("starq_sim");
statePub = ros2publisher(node, "/motors/cmd", "sensor_msgs/JointState");

tic
for n = 1:size(trajectory, 2)
    stateMsg = ros2message("sensor_msgs/JointState");
    stateMsg.position = double(trajectory(:,n,1));
    time = period*(n/N);
    pause(time - toc)
    send(statePub, stateMsg);
end