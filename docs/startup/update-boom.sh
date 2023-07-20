#!/bin/bash

nmcli device disconnect wlan0
nmcli device wifi connect Vicon password viconORL

cd /starq_ws/src
git pull origin main
cd /starq_ws
colcon build

nmcli device disconnect wlan0
nmcli dev wifi hotspot ifname wlan0 ssid StrideBoom password "strideboom"