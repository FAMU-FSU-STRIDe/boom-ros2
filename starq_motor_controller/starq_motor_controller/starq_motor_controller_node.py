from can import Notifier
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from starq_interfaces.msg import *
from starq_interfaces.srv._configure_motor import *
from starq_motor_controller.odrive_can_tool import ODriveCANTool

class STARQMotorDriverNode(Node):

    def __init__(self):
        super().__init__('motor_driver')
        self.get_logger().info("Starting motor controller node.")

         # From odrive_can_tool.py
        self.cantool = ODriveCANTool(self)

        if self.cantool.canok: # Check if CAN successfully initialized
            # Create CAN notifier
            self.cannotify = Notifier(self.cantool.canbus, [self.cantool])

        self.motor_confs : dict[str, ODriveConfig] = {}

        info_frequency = 50.0 # Hz
        self.conf_srv = self.create_service(ConfigureMotor, '/starq/motors/conf', self.conf_motors_callback)
        self.cmd_sub = self.create_subscription(JointState, '/starq/motors/cmd', self.cmd_motors_callback, 10)
        self.info_pub = self.create_publisher(ODriveInfo, '/starq/motors/info', 10)
        self.info_timer = self.create_timer(1.0/info_frequency, self.get_info_callback)

        self.get_logger().info("Motor controller node initialized.")

    # Configure motors
    def conf_motors_callback(self, request : ConfigureMotor_Request, response):
        self.motor_confs[request.config.name] = request.config
        self.cantool.send_config(request.config)
        self.get_logger().info(f"Motor configuration `{request.config.name}` updated.")
        return response

    # Send motor commands
    def cmd_motors_callback(self, msg : JointState):
        self.cantool.send_command(msg, self.motor_confs)

    def get_info_callback(self):
        info = self.cantool.get_info()
        info.time = self.get_clock().now().to_msg()
        self.info_pub.publish(info)
        
    # Put motors in idle
    def idle(self):
        for config in self.motor_confs.keys:
            self.cantool.idle(config.can_id)

    # Emergency stop motors
    def emergency_stop(self):
        for config in self.motor_confs:
            self.cantool.emergency_stop(config.can_id)


# ROS Entry
def main(args=None):
    rclpy.init(args=args)
    node = STARQMotorDriverNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.idle()
        node.cantool.shutdown()
        node.cannotify.stop()
        node.get_logger().info("Motor driver node closed.")
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
