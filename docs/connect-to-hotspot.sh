#!/bin/bash

nmcli device disconnect wlan0
nmcli dev wifi hotspot ifname wlan0 ssid StrideBoom password "strideboom"