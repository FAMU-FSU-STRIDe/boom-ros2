function [motor_pos, motor_vel, motor_trq, ...
                    motor_pos_cmd, motor_vel_cmd, motor_trq_cmd,...
                    motor_qcurrent, bus_current, bus_voltage,...
                    fet_temp, motor_temp...
                 ] = parseMotorInfoArrayData(info_data)
    recording_size = length(info_data);
    motor_count = length(info_data(1).infos);
    motor_pos = nan(recording_size, motor_count);
    motor_vel = nan(recording_size, motor_count);
    motor_trq = nan(recording_size, motor_count);
    motor_pos_cmd = nan(recording_size, motor_count);
    motor_vel_cmd = nan(recording_size, motor_count);
    motor_trq_cmd = nan(recording_size, motor_count);
    motor_qcurrent = nan(recording_size, motor_count);
    bus_current = nan(recording_size, motor_count);
    bus_voltage = nan(recording_size, motor_count);
    fet_temp = nan(recording_size, motor_count);
    motor_temp = nan(recording_size, motor_count);
    for r = 1:recording_size
        motor_infos = info_data(r);
        for m = 1:length(motor_infos.infos)
            info = motor_infos.infos(m);
            motor_pos(r,m) = info.pos_estimate;
            motor_vel(r,m) = info.vel_estimate;
            motor_trq(r,m) = info.torque_estimate;
            motor_pos_cmd(r,m) = info.last_pos_cmd;
            motor_vel_cmd(r,m) = info.last_vel_cmd;
            motor_trq_cmd(r,m) = info.last_torque_cmd;
            motor_qcurrent(r,m) = info.iq_measured;
            bus_current(r,m) = info.bus_current;
            bus_voltage(r,m) = info.bus_voltage;
            fet_temp(r,m) = info.fet_temperature;
            motor_temp(r,m) = info.motor_temperature;
        end
    end
end

