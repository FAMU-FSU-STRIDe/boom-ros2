function leg_data = parseLegData(info_data)

    recording_size = length(info_data);
    leg_count = length(info_data(1).infos);
    dof = length(info_data(1).infos.pos_estimate);

    leg_data = struct;
    leg_data.time = nan(recording_size, 1);
    leg_data.pos_est = nan(dof, recording_size, leg_count);
    leg_data.vel_est = nan(dof, recording_size, leg_count);
    leg_data.acc_est = nan(dof, recording_size, leg_count);

    for r = 1:recording_size

        leg_infos = info_data(r);

        if(~isempty(leg_infos.time))
            leg_data.time(r) = double(leg_infos.time.sec) + double(leg_infos.time.nanosec)*1E-9;
        end

        for l = 1:leg_count

            leg_info = leg_infos(l);

            leg_data.pos_est(:, r, l) = leg_info.infos.pos_estimate;
            if (length(leg_info.infos.vel_estimate) == dof)
                leg_data.vel_est(:, r, l) = leg_info.infos.vel_estimate;
            end
            if (length(leg_info.infos.acc_estimate) == dof)
                leg_data.acc_est(:, r, l) = leg_info.infos.acc_estimate;
            end
        end
    end

    leg_data.time = leg_data.time - leg_data.time(1);
end

