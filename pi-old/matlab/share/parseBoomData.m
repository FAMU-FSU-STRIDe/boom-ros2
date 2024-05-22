function boom_data = parseBoomData(info_data)

    record_size = length(info_data);

    boom_data = struct;
    boom_data.time = nan(record_size, 1);
    boom_data.orientation = nan(record_size, 1);
    boom_data.tilt = nan(record_size, 1);
    boom_data.height = nan(record_size, 1);
    boom_data.speed = nan(record_size, 1);

    for r = 1:record_size

        info = info_data(r);

        if(~isempty(info.time))
            boom_data.time(r) = double(info.time.sec) + double(info.time.nanosec)*1E-9;
        end
        
        boom_data.orientation(r) = info.orientation;
        boom_data.tilt(r) = info.tilt;
        boom_data.height(r) = info.height;
        boom_data.speed(r) = info.speed;
    end

end

