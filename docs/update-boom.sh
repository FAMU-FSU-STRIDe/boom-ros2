#!/bin/bash

nmcli device wifi list
nmcli device disconnect wlan0
nmcli device wifi connect Vicon

cd /starq_ws/src
git pull origin main
cd /starq_ws
colcon build

nmcli device disconnect wlan0
nmcli dev wifi hotspot ifname wlan0 ssid StrideBoom password "strideboom"

systemctl restart boom.service