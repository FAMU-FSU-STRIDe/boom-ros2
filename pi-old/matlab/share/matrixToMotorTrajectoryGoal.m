function goalMsg = matrixToMotorTrajectoryGoal(trajectory, num_loops, publish_rate)

    goalMsg = ros2message("boom_interfaces/RunMotorTrajectoryGoal");
    if (size(trajectory, 3) > 3)
        disp("Wrong trajectory format");
        disp("Format: trajectory(<MOTOR>, <TIME>, <ORDER>)");
        disp("MOTOR: motor id");
        disp("TIME: time dimension [time step = 1 / publish rate]");
        disp("ORDER: position, velocity (opt.), torque (opt.)");
        return
    end
    
    goalMsg.num_loops = int32(num_loops);
    goalMsg.publish_rate = single(publish_rate);
    for order = 1:size(trajectory, 3)
        for time = 1:size(trajectory,2)
            for motor = 1:size(trajectory,1)
                if (order == 1)
                    goalMsg.trajectory(time).commands(motor).input_position = ...
                        single(trajectory(motor,time,order));
                    goalMsg.trajectory(time).commands(motor).input_velocity = ...
                        single(0);
                    goalMsg.trajectory(time).commands(motor).input_torque = ...
                        single(0);
                elseif (order == 2)
                    goalMsg.trajectory(time).commands(motor).input_velocity = ...
                        single(trajectory(motor,time,order));
                elseif (order == 3)
                    goalMsg.trajectory(time).commands(motor).input_torque = ...
                        single(trajectory(motor,time,order));
                end
            end
        end
    end
end

