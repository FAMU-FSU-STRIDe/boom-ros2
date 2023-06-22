clear
%%

jump_traj = load("jump.mat").jump_traj;

trajMsg = convertTrajectoryToGoalMsg(1250, jump_traj);

boom = BoomController();