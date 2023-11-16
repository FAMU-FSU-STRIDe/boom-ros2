function motor_data = parseMotorData(info_data)

    recording_size = length(info_data);
    motor_count = length(info_data(1).infos);

    motor_data = struct;
    motor_data.fault = 0;
    motor_data.time = nan(recording_size, 1);
    motor_data.motor_pos = nan(recording_size, motor_count);
    motor_data.motor_vel = nan(recording_size, motor_count);
    motor_data.motor_trq = nan(recording_size, motor_count);
    motor_data.motor_pos_cmd = nan(recording_size, motor_count);
    motor_data.motor_vel_cmd = nan(recording_size, motor_count);
    motor_data.motor_trq_cmd = nan(recording_size, motor_count);
    motor_data.motor_qcurrent = nan(recording_size, motor_count);
    motor_data.bus_current = nan(recording_size, motor_count);
    motor_data.bus_voltage = nan(recording_size, motor_count);
    motor_data.fet_temp = nan(recording_size, motor_count);
    motor_data.motor_temp = nan(recording_size, motor_count);

    for r = 1:recording_size

        motor_infos = info_data(r);

        if(~isempty(motor_infos.time))
            motor_data.time(r) = double(motor_infos.time.sec) + double(motor_infos.time.nanosec)*1E-9;
        end

        for m = 1:length(motor_infos.infos)
            info = motor_infos.infos(m);
            motor_data.motor_pos(r,m) = info.pos_estimate;
            motor_data.motor_vel(r,m) = info.vel_estimate;
            motor_data.motor_trq(r,m) = info.iq_measured * 8.27/330;
            motor_data.motor_pos_cmd(r,m) = info.last_pos_cmd;
            motor_data.motor_vel_cmd(r,m) = info.last_vel_cmd;
            motor_data.motor_trq_cmd(r,m) = info.last_torque_cmd;
            motor_data.motor_qcurrent(r,m) = info.iq_measured;
            motor_data.bus_current(r,m) = info.bus_current;
            motor_data.bus_voltage(r,m) = info.bus_voltage;
            motor_data.fet_temp(r,m) = info.fet_temperature;
            motor_data.motor_temp(r,m) = info.motor_temperature;

            if (info.fault ~= 0)
                motor_data.fault = info.fault;
            end
        end
    end

    motor_data.time = motor_data.time - motor_data.time(1);
end

