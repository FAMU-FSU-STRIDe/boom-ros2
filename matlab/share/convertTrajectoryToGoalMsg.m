function goalMsg = convertTrajectoryToGoalMsg(publish_rate, pos_traj, vel_traj, accel_traj)
    arguments
        publish_rate {mustBeNumeric, mustBePositive}
        pos_traj = []
        vel_traj = []
        accel_traj = []
    end
    goalMsg = ros2message("starq_interfaces/RunLegTrajectoryGoal");
    goalMsg.publish_rate = single(publish_rate);
    goalSize = max([length(pos_traj), length(vel_traj), length(accel_traj)]);
    for i = 1:goalSize
        goalMsg.trajectory(i).commands(1) = ros2message("starq_interfaces/LegCommand");
        if (i <= size(pos_traj,2))
            goalMsg.trajectory(i).commands(1).input_pos = single(pos_traj(:,i));
        end
        if (i <= size(vel_traj,2))
            goalMsg.trajectory(i).commands(1).input_vel = single(vel_traj(:,i));
        end
        if (i <= size(accel_traj,2))
            goalMsg.trajectory(i).commands(1).input_acc = single(accel_traj(:,i));
        end
    end
end

