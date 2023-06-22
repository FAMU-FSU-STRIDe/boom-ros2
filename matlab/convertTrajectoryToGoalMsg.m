function goalMsg = convertTrajectoryToGoalMsg(publish_rate, pos_traj, vel_traj, accel_traj)
    arguments
        publish_rate {mustBeNumeric, mustBePositive}
        pos_traj = []
        vel_traj = []
        accel_traj = []
    end
    goalMsg = ros2message("starq_interfaces/RunLegTrajectoryGoal");
    goalMsg.publish_rate = publish_rate;
    for p = 1:size(pos_traj,2)
        goalMsg.trajectory.commands(p).input_pos = pos_traj(:,p);
    end
    for v = 1:size(vel_traj,2)
        goalMsg.trajectory.commands(v).input_pos = vel_traj(:,v);
    end
    for a = 1:size(accel_traj,2)
        goalMsg.trajectory.commands(a).input_pos = pos_traj(:,a);
    end
end

