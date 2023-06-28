function confMsg = defaultODriveConfig(id, can_id)
    confMsg = ros2message("starq_interfaces/ODriveConfig");
    confMsg.id = uint8(id);
    confMsg.can_id = uint8(can_id);
    confMsg.requested_state = uint32(1); % IDLE
    confMsg.control_mode = uint32(3); % POSITION
    confMsg.input_mode = uint32(1); % PASSTHROUGH
    confMsg.velocity_limit = single(25); % rev/s
    confMsg.current_limit = single(5); % A
    confMsg.position_gain = single(25);
    confMsg.velocity_gain = single(0.15);
    confMsg.velocity_integrator_gain = single(0.30);
    confMsg.gear_ratio = single(6);
end

