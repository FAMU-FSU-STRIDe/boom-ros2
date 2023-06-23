function confMsg = defaultFiveBar2DLegConfig(id, motor_ids)
    confMsg = ros2message("starq_interfaces/LegConfig");
    confMsg.id = uint8(id);
    confMsg.kinematic_type = 'fivebar-2d';
    confMsg.motor_ids = uint8(motor_ids);
end

