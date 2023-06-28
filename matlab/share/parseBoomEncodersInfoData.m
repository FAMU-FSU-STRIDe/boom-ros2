function [orientation, tilt, height, speed] = parseBoomEncodersInfoData(obj)
    record = obj.BoomEncodersRecorder.RecordingData;
    record_size = length(record);
    orientation = nan(record_size, 1);
    tilt = nan(record_size, 1);
    height = nan(record_size, 1);
    speed = nan(record_size, 1);
    for r = 1:record_size
        info = record(r);
        orientation(r) = info.orientation;
        tilt(r) = info.tilt;
        height(r) = info.height;
        speed(r) = info.speed;
    end
end

