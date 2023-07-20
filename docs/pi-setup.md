# Boom Raspberry Pi Setup

- Flash Ubuntu Desktop 22.04 on MicroSD card.
- Configuration:
    - Username: `pi`
    - Computer Name: `strideboom`
    - Password: `password`
- Update and Upgrade
```
sudo apt update
sudo apt upgrade -y
```
- Get ROS2 Humble
```
sudo apt install software-properties-common
sudo add-apt-repository universe

sudo apt update && sudo apt install curl -y

sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

sudo apt update
sudo apt upgrade -y
sudo apt install ros-humble-ros-base
sudo apt install ros-dev-tools

echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
```
- Get STARQ Repository
```
sudo apt install git
sudo mkdir /starq_ws
sudo chmod 777 /starq_ws
cd /starq_ws
git clone https://github.com/FAMU-FSU-STRIDe/starq-ros2 src
```
- Install dependencies
```
sudo apt install python3-pip
pip3 install odrive can cantools pyserial setuptools==58.2.0
sudo apt install can-utils
```
- Configure Pi for CAN
```
sudo nano /boot/firmware/config.txt
```
Add these lines:
```
dtoverlay=mcp2515-can0,oscillator=12000000,interrupt=25
dtoverlay=spi0-hw-cs
```
Save, then reboot.

- Configure start up scripts
```
sudo chmod +777 /starq_ws/src/docs/startup/start-can0.sh
sudo cp /starq_ws/src/docs/startup/can0.service /etc/systemd/system/can0.service
sudo systemctl enable can0.service
```
```
sudo chmod +777 /starq_ws/src/docs/startup/start-boom.sh
sudo cp /starq_ws/src/docs/startup/boom.service /etc/systemd/system/boom.service
sudo systemctl enable boom.service
```
- Configure Teensy udev rule
```
sudo cp /starq_ws/src/docs/99-teensy.rules /etc/udev/rules.d/99-teensy.rules
```
- Configure mobile hotspot
```
sudo chmod +777 /starq_ws/src/docs/update-boom.sh
sudo /starq_ws/src/docs/update-boom.sh
```

Good to go?