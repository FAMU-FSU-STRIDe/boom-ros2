function [orientation, tilt, height, speed] = parseBoomEncodersInfoData(info_data)
    record_size = length(info_data);
    orientation = nan(record_size, 1);
    tilt = nan(record_size, 1);
    height = nan(record_size, 1);
    speed = nan(record_size, 1);
    for r = 1:record_size
        info = info_data(r);
        orientation(r) = info.orientation;
        tilt(r) = info.tilt;
        height(r) = info.height;
        speed(r) = info.speed;
    end
end

