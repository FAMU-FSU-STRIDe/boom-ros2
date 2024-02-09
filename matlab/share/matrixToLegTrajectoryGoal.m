function goalMsg = matrixToLegTrajectoryGoal(trajectory, num_loops, publish_rate)

    goalMsg = ros2message("boom_interfaces/RunLegTrajectoryGoal");
    if (size(trajectory, 4) > 3)
        disp("Wrong trajectory format");
        disp("Format: trajectory(<DIM>, <LEG>, <TIME>, <ORDER>)");
        disp("DIM: coordinate axes (i.e X,Y,Z)");
        disp("LEG: leg id");
        disp("TIME: time dimension [time step = 1 / publish rate]");
        disp("ORDER: position, velocity (opt.), acceleration (opt.)");
        return
    end
    
    goalMsg.num_loops = int32(num_loops);
    goalMsg.publish_rate = single(publish_rate);
    for order = 1:size(trajectory, 4)
        for time = 1:size(trajectory,3)
            for leg = 1:size(trajectory,2)
                if (order == 1)
                    goalMsg.trajectory(time).commands(leg).input_pos = ...
                        single(trajectory(:,leg,time,order));
                    sz = size(trajectory(:,leg,time,order));
                    goalMsg.trajectory(time).commands(leg).input_vel = single(zeros(sz));
                    goalMsg.trajectory(time).commands(leg).input_acc = single(zeros(sz));
                elseif (order == 2)
                    goalMsg.trajectory(time).commands(leg).input_vel = ...
                        single(trajectory(:,leg,time,order));
                elseif (order == 3)
                    goalMsg.trajectory(time).commands(leg).input_acc = ...
                        single(trajectory(:,leg,time,order));
                end
            end
        end
    end
end

