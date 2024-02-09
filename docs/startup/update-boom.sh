#!/bin/bash

nmcli device disconnect wlan0
nmcli device wifi connect Vicon password viconORL

cd /boom_ws/src
git pull origin main
cd /boom_ws

nmcli device disconnect wlan0
nmcli dev wifi hotspot ifname wlan0 ssid StrideBoom password "strideboom"