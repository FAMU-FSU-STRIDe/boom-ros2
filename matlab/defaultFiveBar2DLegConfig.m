function confMsg = defaultFiveBar2DLegConfig(id)
    confMsg = ros2message("starq_interfaces/LegConfig");
    confMsg.id = uint8(id);
    confMsg.kinematic_type = 'fivebar-2d';
    confMsg.motor_ids = [uint8(0),uint8(1)];
end

