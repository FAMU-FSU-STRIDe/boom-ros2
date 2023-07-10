#!/bin/bash

ip link set can0 up type can bitrate 1000000
ifconfig can0 txqueuelen 10000