import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy

from boom_interfaces.msg import ODriveCommandArray
from boom_interfaces.msg import ODriveCommand

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

        self.get_logger().info("Joystick Node Started")
        self.joy_sub = self.create_subscription(Joy, 'joy', self.joy_callback, 10)

        self.odrive_pub = self.create_publisher(ODriveCommandArray, '/boom/motors/cmd', 10)

    def joy_callback(self, msg):
        forward_control = msg.axes[1]
        angle_control = msg.axes[2]
        hip_control = msg.axes[5]
        self.setDirection(forward_control)
        self.setJointAngle(angle_control, hip_control)
        
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
        msg.commands[0].input_velocity = 0.0
        msg.commands[0].input_torque = 0.0
        msg.commands[1].input_position = self.posCounter
        msg.commands[1].input_velocity = 0.0
        msg.commands[1].input_torque = 0.0

        self.odrive_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = JoyStickNode()
    rclpy.spin(node)
    rclpy.shutdown()
