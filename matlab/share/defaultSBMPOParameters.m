function paramsMsg = defaultSBMPOParameters(start_state, goal_state)

    paramsMsg = ros2message("sbmpo_msgs/RunSBMPOGoal");
    if (length(start_state) ~= 3)
        disp("Incorrect start state size. Should have 3 elements (x, y, theta)");
        return
    elseif (length(goal_state) ~= 2)
        disp("Incorrect goal state size. Should have 2 elements (x, y)");
        return
    end

    paramsMsg.parameters.max_iterations = uint32(100000);
    paramsMsg.parameters.max_generations = uint32(100);
    paramsMsg.parameters.time_limit_us = uint32(1000000); % 1 sec
    paramsMsg.parameters.sample_time = single(1.0);
    paramsMsg.parameters.grid_resolution = single([0.1, 0.1, pi/36]);

    paramsMsg.parameters.start_state = ros2message("sbmpo_msgs/State");
    paramsMsg.parameters.start_state.data = single(start_state);

    paramsMsg.parameters.goal_state = ros2message("sbmpo_msgs/State");
    paramsMsg.parameters.goal_state.data = single(goal_state);

    % SAMPLES: [v, u]
    paramsMsg.parameters.samples = ros2message("sbmpo_msgs/Control");
    paramsMsg.parameters.samples(2).data = single([1.0, 0]);
    paramsMsg.parameters.samples(1).data = single([1.0, +pi/12]);
    paramsMsg.parameters.samples(3).data = single([1.0, -pi/12]);

end

