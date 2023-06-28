function [time, motor_pos, motor_vel, motor_trq, ...
                    motor_pos_cmd, motor_vel_cmd, motor_trq_cmd,...
                    motor_qcurrent, bus_current, bus_voltage,...
                    fet_temp, motor_temp...
                 ] = parseMotorInfoArrayData(obj, info_data)
    recording_size = length(info_data);
    time = linspace(0,(1/obj.ODriveInfoRate)*recording_size, recording_size);
    motor_pos = nan(recording_size, obj.NumberOfMotors);
    motor_vel = nan(recording_size, obj.NumberOfMotors);
    motor_trq = nan(recording_size, obj.NumberOfMotors);
    motor_pos_cmd = nan(recording_size, obj.NumberOfMotors);
    motor_vel_cmd = nan(recording_size, obj.NumberOfMotors);
    motor_trq_cmd = nan(recording_size, obj.NumberOfMotors);
    motor_qcurrent = nan(recording_size, obj.NumberOfMotors);
    bus_current = nan(recording_size, obj.NumberOfMotors);
    bus_voltage = nan(recording_size, obj.NumberOfMotors);
    fet_temp = nan(recording_size, obj.NumberOfMotors);
    motor_temp = nan(recording_size, obj.NumberOfMotors);
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

