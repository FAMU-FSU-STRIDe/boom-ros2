import rclpy
from rclpy.node import Node

import serial

from starq_interfaces.msg import BoomEncoderInfo

class BoomEncodersNode(Node):

    def __init__(self):
        super().__init__('boom_encoders_node')

        self.get_logger().info("Starting boom encoders node.")

        self.serial_port = '/dev/ttyACM0'
        self.baud_rate = 9600
        self.serial_port = serial.Serial(self.serial_port, self.baud_rate)

        self.info_pub = self.create_publisher(BoomEncoderInfo, '/starq/boom/info', 10)

        self.publish_rate = 50
        self.publish_timer = self.create_timer(1.0 / self.publish_rate, self.publish)

        self.base_cpr = 160_000
        self.arm_cpr = 1
        self.arm_length = 1.5
        self.last_orientation = None

        self.get_logger().info("Boom encoders node initialized.")

    def publish(self):

        # Ask Teensy for encoder info
        self.serial_port.write(('r').encode())

        # Read from serial
        orientation = float(self.serial_port.readline().decode())
        tilt = float(self.serial_port.readline().decode())

        # Convert to ROS type
        info_msg = BoomEncoderInfo()
        info_msg.time = self.get_clock().now().to_msg()
        info_msg.orientation = orientation / self.base_cpr
        info_msg.tilt = tilt / self.arm_cpr
        info_msg.height = tilt * self.arm_length / self.arm_cpr
        if self.last_orientation is None:
            self.last_orientation = orientation
        info_msg.speed = self.arm_length * (orientation - self.last_orientation) * self.publish_rate / self.base_cpr

        self.last_orientation = orientation

        # Publish messages
        self.info_pub.publish(info_msg)
        

def main(args=None):
    rclpy.init(args=args)
    node = BoomEncodersNode()
    try:
        rclpy.spin(node)
    except Exception as e:
        print(e)
    except KeyboardInterrupt:
        pass
    node.get_logger().info("Boom encoder node closed.")
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
