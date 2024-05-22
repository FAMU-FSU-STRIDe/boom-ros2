function generateMsgs()

    msg_path = fullfile(pwd, "custom/boom_interfaces/msg/");
    srv_path = fullfile(pwd, "custom/boom_interfaces/srv/");
    action_path = fullfile(pwd, "custom/boom_interfaces/action/");
    copyfile("../boom_interfaces/msg/", msg_path, 'f');
    copyfile("../boom_interfaces/srv/", srv_path, 'f');
    copyfile("../boom_interfaces/action", action_path, 'f');
    
    folder_path = fullfile(pwd, "custom");
    ros2genmsg(folder_path)

end