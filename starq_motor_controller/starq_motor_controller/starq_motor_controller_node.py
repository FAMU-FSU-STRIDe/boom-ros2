import rclpy
from rclpy.node import Node

from starq_interfaces.msg import *
from starq_interfaces.srv._configure_motors import *

import starq_motor_controller.odrive_can_functions as canfunc

class STARQMotorDriverNode(Node):

    def __init__(self):
        super().__init__('motor_driver')
        self.get_logger().info("Starting motor controller node.")

        self.motor_confs : list[ODriveConfig] = []
        self.last_cmds : list[ODriveCommand] = []

        info_frequency = 100 # Hz
        self.cmd_sub = self.create_subscription(ODriveCommandArray, '/starq/motors/cmd', self.cmd_motors_callback, 10)
        self.conf_srv = self.create_service(ConfigureMotors, '/starq/motors/conf', self.conf_motors_callback)
        self.info_pub = self.create_publisher(ODriveInfoArray, '/starq/motors/info', 10)
        self.info_timer = self.create_timer(1.0/info_frequency, self.get_info_callback)

        self.get_logger().info("Motor controller node initialized.")

    # Send motor commands
    def cmd_motors_callback(self, msg : ODriveCommandArray):
        if len(self.motor_confs) == 0:
            self.get_logger().warn("No motors configured!")
        for config in self.motor_confs:
            try:
                cmd = ODriveCommand(msg.commands[config.id])
            except IndexError:
                self.get_logger().error(f"Missing motor command for id: {config.id}")
                continue
            if config.control_mode == 3:
                canfunc.set_position(config.can_id, 
                                     position=cmd.input_position * config.gear_ratio, 
                                     velocity_ff=cmd.input_velocity * config.gear_ratio, 
                                     torque_ff=cmd.input_torque / config.gear_ratio)
            elif config.control_mode == 2:
                canfunc.set_velocity(config.can_id,
                                     velocity=cmd.input_velocity * config.gear_ratio,
                                     torque_ff=cmd.input_torque / config.gear_ratio)
            elif config.control_mode == 1:
                canfunc.set_torque(config.can_id,
                                   torque=cmd.input_torque / config.gear_ratio)
        self.last_cmds = list[ODriveCommand](msg.commands)

    # Configure motors
    def conf_motors_callback(self, request : ConfigureMotors_Request, response):
        self.motor_confs = list[ODriveConfig](request.configs)
        for config in self.motor_confs:
            can_id = config.can_id
            canfunc.clear_errors(can_id)
            canfunc.set_state(can_id, config.requested_state)
            canfunc.set_control_mode(can_id, config.control_mode, config.input_mode)
            canfunc.set_limits(can_id, config.velocity_limit, config.current_limit)
            canfunc.set_trap_traj_limits(can_id, config.trap_traj_velocity_limit, config.trap_traj_acceleration_limit,
                                         config.trap_traj_deceleration_limit, config.trap_traj_inertia)
            canfunc.set_gains(can_id, config.position_gain, config.velocity_gain, config.velocity_integrator_gain)
            self.get_logger().info("Motor configurations updated.")
        return response

    def get_info_callback(self):
        infos = ODriveInfoArray()
        for config in self.motor_confs:
            info = ODriveInfo()
            can_id = config.can_id
            info.fault, info.state = canfunc.get_error_and_state(can_id)
            info.pos_estimate, info.vel_estimate = canfunc.get_position_and_velocity_estimates(can_id)
            info.iq_setpoint, info.iq_measured = canfunc.get_qcurrent_setpoint_and_measured(can_id)
            info.torque_estimate = info.iq_measured * (8.27 / 330)
            info.motor_temperature = canfunc.get_temperature(can_id)
            info.bus_voltage, info.bus_current = canfunc.get_bus_voltage_and_current(can_id)
            if (len(self.last_cmds) <= config.id):
                last_cmd = self.last_cmds[config.id]
                info.pos_error = last_cmd.input_position - info.pos_estimate
                info.vel_error = last_cmd.input_velocity - info.vel_estimate
                info.torque_error = last_cmd.input_torque - info.torque_estimate
            infos.infos.insert(config.id, info)
        self.info_pub.publish(infos)
        
    
    # Emergency stop
    def stop(self):
        for config in self.motor_confs:
            canfunc.set_state(config.id, 1) # Idle


# ROS Entry
def main(args=None):
    rclpy.init(args=args)
    node = STARQMotorDriverNode()
    try:
        rclpy.spin(node)
    except Exception as e:
        node.get_logger().error(str(e))
    except KeyboardInterrupt:
        pass
    node.stop()
    canfunc._canbus.shutdown()
    node.get_logger().info("Motor driver node closed.")
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
