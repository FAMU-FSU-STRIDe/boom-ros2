# STARQ-ROS2
ROS2 packages for STARQ project

## Directory

### docs

Contains project documentation.

### matlab

MATLAB library for receiving information, configuring, and commanding the motors over ROS2. Connects to the robot via the Wi-Fi network.

### starq_interfaces

Defines ROS2 custom message, service, and action types.

### starq_motor_controller

Handles recieving commands from ROS2 and sending them to the motors via CAN communication. Also handles motor configurations through a ROS service.

### starq_leg_kinematics

Converts from Leg space to Motor space using user defined kinematic models. Also stores leg configurations.

### starq_trajectory_publisher

Handles publishing a trajectory at a fixed rate, and provides feedback about the run. Implemented as an action server.

### starq_boom_encoders

Package for the boom to read the orientation and tilt encoders. Also uses the arm length and time step to compute the height and speed of the leg.

### launch

Contains files for different ROS launch configurations.

### docker

Docker file and script for virtual development.

## To Do
### Documentation
- MATLAB Library functions and classes
- How to format trajectories in matlab.
- How to create a custom matlab controller
- How to create a custom leg kinematic model.
### ROS2
- Motor trajectory publisher: Run trajectories already in motor space.
- Nav2 Interface: Convert `/cmd_vel` Twist messages to RunLegTrajectory actions.