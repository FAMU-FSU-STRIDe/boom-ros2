import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy

from boom_interfaces.srv._configure_motors import *
from boom_interfaces.msg import ODriveCommandArray
from boom_interfaces.msg import ODriveCommand
from boom_interfaces.msg import ODriveConfig

import RPi.GPIO as GPIO

class JoyStickNode(Node):
    def __init__(self):
        super().__init__('joystick_node')

        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(12, GPIO.OUT)
        GPIO.setup(16, GPIO.OUT)
        GPIO.setup(18, GPIO.OUT)

        self.posCounter = 0.0
        self.kneeCounter = 0.0

        self.pi_pwm = GPIO.PWM(12, 10000)
        self.pi_pwm.start(0)
        self.pi_pwm.ChangeDutyCycle(0.0)
        
        self.startButtonOld = 0
        self.startButton = 0
        self.startFlag = False

        self.readyButtonOld = 0
        self.readyButton = 0
        self.readyFlag = False

        self.get_logger().info("Joystick Node Started")
        self.joy_sub = self.create_subscription(Joy, 'joy', self.joy_callback, 10)

        self.odrive_pub = self.create_publisher(ODriveCommandArray, '/boom/motors/cmd', 10)
        # Do I need to create something here to send configs?
        self.odrive_config = self.create_client(ConfigureMotors, '/boom/motors/conf')
        self.req = ConfigureMotors.Request()

    def joy_callback(self, msg):
        self.startButton = msg.buttons[0]
        self.readyButton = msg.buttons[1]
        #self.get_logger().info('Ready button: "%d"' % self.readyButton)
        #self.get_logger().info('Start button: "%d"' % self.startButton)
        if self.startButtonOld == 0 and self.startButton == 1:
            self.startFlag = ~self.startFlag

        if self.readyButtonOld == 0 and self.readyButton == 1:
            self.readyFlag = ~self.readyFlag
            self.req.configs = [self.defaultConfig(iter, iter) for iter in range(2)] # Create default
            
            if self.readyFlag:
                self.req.configs[0].requested_state = 8
                self.req.configs[1].requested_state = 8
                # How to send this?
            else:
                self.req.configs[0].requested_state = 1
                self.req.configs[1].requested_state = 1
            # self.odrive_config.update(config)
            self.odrive_config.call_async(self.req)
        
        if self.startFlag:
            forward_control = msg.axes[1]
            angle_control = msg.axes[2]
            hip_control = msg.axes[5]
            self.setDirection(forward_control)
            self.setJointAngle(angle_control, hip_control)
        
        self.startButtonOld = self.startButton
        self.readyButtonOld = self.readyButton
        
    def setDirection(self, forward):
        if forward > 0:
            GPIO.output(16, GPIO.HIGH)
            GPIO.output(18, GPIO.LOW)
        else:
            GPIO.output(16, GPIO.LOW)
            GPIO.output(18, GPIO.HIGH)

        self.pi_pwm.ChangeDutyCycle(abs(forward)*40)

    def setJointAngle(self, angle, hip):
        msg = ODriveCommandArray()
        
        msg.commands = [ODriveCommand() for _ in range(2)]

        #print(self.posCounter)
        self.posCounter = self.posCounter + 10*hip/360
        self.kneeCounter += 24*angle/360
        #if self.posCounter > 120/360:
        #        self.posCounter = 120/360
        #elif self.posCounter < -120/360:
        #        self.posCounter = -120/360
        msg.commands[0].input_position = self.kneeCounter
        # msg.commands[0].input_position = self.posCounter
        msg.commands[0].input_velocity = 0.0
        msg.commands[0].input_torque = 0.0
        msg.commands[1].input_position = self.posCounter
        #msg.commands[1].input_position = self.kneeCounter
        msg.commands[1].input_velocity = 0.0
        msg.commands[1].input_torque = 0.0

        self.odrive_pub.publish(msg)

    def defaultConfig(self, id, can_id):
        config = ODriveConfig()
        config.id = id
        config.can_id = can_id
        config.requested_state = 1
        config.control_mode = 3
        config.input_mode = 1
        config.velocity_limit = float(25)
        config.current_limit = float(14)
        config.position_gain = float(25)
        config.velocity_gain = float(0.15)
        config.velocity_integrator_gain = float(0.30)

        return config

def main(args=None):
    rclpy.init(args=args)
    node = JoyStickNode()
    try:
        rclpy.spin(node) # add guards from boom_motor_controller
    except KeyboardInterrupt:
            pass
    finally:
        rclpy.shutdown()
