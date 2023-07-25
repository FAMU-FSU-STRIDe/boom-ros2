from can import Notifier
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from starq_interfaces.msg import *
from starq_interfaces.srv._configure_motors import *
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
        self.last_cmd : JointState = {}

        info_frequency = 50.0 # Hz
        self.cmd_sub = self.create_subscription(JointState, '/starq/motors/cmd', self.cmd_motors_callback, 10)
        self.conf_srv = self.create_service(ConfigureMotors, '/starq/motors/conf', self.conf_motors_callback)
        self.info_pub = self.create_publisher(ODriveInfoArray, '/starq/motors/info', 10)
        self.info_timer = self.create_timer(1.0/info_frequency, self.get_info_callback)

        self.get_logger().info("Motor controller node initialized.")

    # Send motor commands
    def cmd_motors_callback(self, msg : JointState):
        self.cantool.send_commands(msg, self.motor_confs)
        self.last_cmds = msg

    # Configure motors
    def conf_motors_callback(self, request : ConfigureMotors_Request, response):
        self.motor_confs = self.cantool.load_configurations(request.configs)
        self.get_logger().info("Motor configurations updated.")
        return response

    def get_info_callback(self):
        infos = ODriveInfoArray()
        infos.infos = [ODriveInfo()] * (self.max_motor_id+1) # Allocate for max number of motors
        for config in self.motor_confs:
            info = self.cantool.get_latest_info(config.can_id)
            if (config.id < len(self.last_cmds)):
                # Add last commanded position to info for reference
                last_cmd = self.last_cmds[config.id]
                info.last_pos_cmd = last_cmd.input_position
                info.last_vel_cmd = last_cmd.input_velocity
                info.last_torque_cmd = last_cmd.input_torque
            infos.infos[config.id] = info
        infos.time = self.get_clock().now().to_msg()
        self.info_pub.publish(infos)
        
    # Put motors in idle
    def idle(self):
        for config in self.motor_confs:
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
