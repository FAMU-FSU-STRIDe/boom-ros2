function trajectoryMsg = matrixToJointTrajectory(trajectory, names, publish_rate)

    trajectoryMsg = ros2message("trajectory_msgs/JointTrajectory");
    trajectoryMsg.joint_names = names;

    if (size(trajectory, 3) > 3)
        disp("Wrong trajectory format");
        disp("Format: trajectory(<MOTOR>, <TIME>, <ORDER>)");
        disp("MOTOR: motor id");
        disp("TIME: time dimension [time step = 1 / publish rate]");
        disp("ORDER: position, velocity (opt.), torque (opt.)");
        return
    end
    
    for time = 1:size(trajectory,2)
        for order = 1:size(trajectory, 3)
            if (order == 1)
                trajectoryMsg.points(time).positions = trajectory(:,time,1);
            elseif (order == 2)
                trajectoryMsg.points(time).velocities = trajectory(:,time,2);
            elseif (order == 3)
                trajectoryMsg.points(time).effort = trajectory(:,time,3);
            end
        end
        trajectoryMsg.points(time).time_from_start = time / publish_rate;
    end

end

