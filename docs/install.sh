#!/bin/bash

# Update and Upgrade
sudo apt update
sudo apt upgrade -y

# Install required software
sudo apt install software-properties-common curl git python3-pip can-utils openssh-server -y

# Add universe repository
sudo add-apt-repository universe -y

# Add ROS2 key and repository
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Update again after adding the repository
sudo apt update
sudo apt upgrade -y

# Install ROS2 Humble and dev tools
sudo apt install ros-humble-ros-base ros-dev-tools -y
echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc

# Get STARQ Repository
sudo mkdir /starq_ws
sudo chmod 777 /starq_ws
cd /starq_ws
git clone https://github.com/FAMU-FSU-STRIDe/starq-ros2 src

# Install dependencies
pip3 install odrive can cantools pyserial setuptools==58.2.0

# Configure Pi for CAN
echo -e "\ndtoverlay=mcp2515-can0,oscillator=12000000,interrupt=25\ndtoverlay=spi0-hw-cs" | sudo tee -a /boot/firmware/config.txt

# Configure start up scripts
sudo chmod +777 /starq_ws/src/docs/startup/start-can0.sh
sudo cp /starq_ws/src/docs/startup/can0.service /etc/systemd/system/can0.service
sudo systemctl enable can0.service

sudo chmod +777 /starq_ws/src/docs/startup/start-boom.sh
sudo cp /starq_ws/src/docs/startup/boom.service /etc/systemd/system/boom.service
sudo systemctl enable boom.service

sudo chmod +777 /starq_ws/src/docs/startup/update-boom.sh
sudo cp /starq_ws/src/docs/startup/boom-update.service /etc/systemd/system/update-boom.service
sudo systemctl enable boom-update.service

# Configure Teensy udev rule
sudo cp /starq_ws/src/docs/99-teensy.rules /etc/udev/rules.d/99-teensy.rules

# Configure mobile hotspot
sudo chmod +777 /starq_ws/src/docs/update-boom.sh
sudo /starq_ws/src/docs/update-boom.sh

# Enable SSH
sudo systemctl enable ssh
sudo ufw allow ssh

# Reboot
sudo reboot
