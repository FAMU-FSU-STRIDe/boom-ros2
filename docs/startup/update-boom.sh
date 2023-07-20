#!/bin/bash

nmcli device wifi list
nmcli device disconnect ifname wlan0
nmcli device wifi connect Vicon password viconORL ifname wlan0