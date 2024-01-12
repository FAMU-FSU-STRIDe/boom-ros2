import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy

from starq_interfaces.msg import ODriveCommandArray
from starq_interfaces.msg import ODriveCommand

import RPi.GPIO as GPIO

class JoyStickNode(Node):
    def __init__(self):
        super().__init__('joystick_node')

        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(12, GPIO.OUT)
        GPIO.setup(16, GPIO.OUT)
        GPIO.setup(18, GPIO.OUT)

        self.pi_pwm = GPIO.PWM(12, 10000)
        self.pi_pwm.start(0)

        self.get_logger().info("Joystick Node Started")
        self.joy_sub = self.create_subscription(Joy, 'joy', self.joy_callback, 10)

        self.odrive_pub = self.create_publisher(ODriveCommandArray, 'odrive', 10)

    def joy_callback(self, msg):
        self.get_logger().info("Joystick Callback")
        forward_control = msg.axes[1]
        angle_control = msg.axes[0]
        self.setDirection(forward_control)
        self.setJointAngle(angle_control)
        
    def setDirection(self, forward):
        if forward > 0:
            GPIO.output(16, GPIO.HIGH)
            GPIO.output(18, GPIO.LOW)
        else:
            GPIO.output(16, GPIO.LOW)
            GPIO.output(18, GPIO.HIGH)

        self.get_logger().info("Setting Direction")

        self.pi_pwm.ChangeDutyCycle(abs(forward)*100)

    def setJointAngle(self, angle):
        msg = ODriveCommandArray()
        
        msg.commands = [ODriveCommand()]

        msg.commands[0].input_position = 0.0
        msg.commands[0].input_velocity = angle
        msg.commands[0].input_torque = 0.0

        self.get_logger().info("Publishing ODriveCommandArray")

        self.odrive_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = JoyStickNode()
    rclpy.spin(node)
    rclpy.shutdown()