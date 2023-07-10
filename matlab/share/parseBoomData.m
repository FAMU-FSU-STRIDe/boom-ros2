function [time, orientation, tilt, height, speed] = parseBoomData(info_data)

    record_size = length(info_data);

    time = nan(record_size, 1);
    orientation = nan(record_size, 1);
    tilt = nan(record_size, 1);
    height = nan(record_size, 1);
    speed = nan(record_size, 1);

    for r = 1:record_size

        info = info_data(r);

        if(~isempty(motor_infos.time))
            time(r) = double(motor_infos.time.sec) + double(motor_infos.time.nanosec)*1E-9;
        end
        
        orientation(r) = info.orientation;
        tilt(r) = info.tilt;
        height(r) = info.height;
        speed(r) = info.speed;
    end

end

