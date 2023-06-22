#ifndef STARQ_LEG_KINEMATICS_NODE_HPP_
#define STARQ_LEG_KINEMATICS_NODE_HPP_

#include <map>
#include <string>
#include <vector>

#include <rclcpp/rclcpp.hpp>

#include <starq_interfaces/msg/leg_command_array.hpp>
#include <starq_interfaces/srv/configure_legs.hpp>
#include <starq_interfaces/msg/leg_info_array.hpp>
#include <starq_interfaces/msg/o_drive_command_array.hpp>
#include <starq_interfaces/msg/o_drive_info_array.hpp>

#include <starq_leg_kinematics/KinematicModel.hpp>

namespace starq {

using namespace starq_interfaces::msg;
using namespace starq_interfaces::srv;

class LegKinematicsNode : public rclcpp::Node {

public:

    LegKinematicsNode()
    : rclcpp::Node("leg_kinematics") {

        RCLCPP_INFO(this->get_logger(), "Starting Leg Kinematics node.");

        this->cmd_sub_ = this->create_subscription<LegCommandArray>("/starq/legs/cmd", 10,
            std::bind(&LegKinematicsNode::cmd_legs_callback_, this, std::placeholders::_1));
        this->cmd_pub_ = this->create_publisher<ODriveCommandArray>("/starq/motors/cmd", 10);

        this->conf_srv_ = this->create_service<ConfigureLegs>("/starq/legs/conf",
            std::bind(&LegKinematicsNode::conf_legs_callback_, this, std::placeholders::_1, std::placeholders::_2));

        this->info_sub_ = this->create_subscription<ODriveInfoArray>("/starq/motors/info", 10,
            std::bind(&LegKinematicsNode::get_info_callback_, this, std::placeholders::_1));
        this->info_pub_ = this->create_publisher<LegInfoArray>("/starq/legs/info", 10);

        RCLCPP_INFO(this->get_logger(), "Leg Kinematics node initialized.");
    }

    void add_model(const std::string& name, KinematicModel::Ptr model) {
        model_map_[name] = model;
    }

private:

    rclcpp::Subscription<LegCommandArray>::SharedPtr cmd_sub_;
    rclcpp::Publisher<ODriveCommandArray>::SharedPtr cmd_pub_;

    rclcpp::Service<ConfigureLegs>::SharedPtr conf_srv_;

    rclcpp::Subscription<ODriveInfoArray>::SharedPtr info_sub_;
    rclcpp::Publisher<LegInfoArray>::SharedPtr info_pub_;

    std::vector<LegConfig> leg_confs_;
    std::map<std::string, KinematicModel::Ptr> model_map_;

    void cmd_legs_callback_(const LegCommandArray::SharedPtr cmd_msg_in) const {
        ODriveCommandArray cmd_msg_out;
        for (const LegConfig& leg_conf : leg_confs_) {
            if (leg_conf.id >= uint8_t(cmd_msg_in->commands.size())) {
                RCLCPP_ERROR(this->get_logger(), "Missing command for leg id: %d", leg_conf.id);
                return;
            }
            const LegCommand leg_cmd = cmd_msg_in->commands[leg_conf.id];
            if (model_map_.find(leg_conf.kinematic_type) == model_map_.end()) {
                RCLCPP_ERROR(this->get_logger(), "Could not find kinematic type: %s", leg_conf.kinematic_type.c_str());
                return;
            }
            KinematicModel::Ptr model = model_map_.at(leg_conf.kinematic_type);
            const ODriveCommandArray motor_cmds = model->get_inverse(leg_cmd);
            for (size_t idx = 0; idx < motor_cmds.commands.size(); idx++) {
                const uint8_t motor_id = leg_conf.motor_ids[idx];
                if (size_t(motor_id) >= cmd_msg_out.commands.size())
                    cmd_msg_out.commands.resize(motor_id+1);
                cmd_msg_out.commands[motor_id] = motor_cmds.commands[idx];
            }
        }
        cmd_pub_->publish(cmd_msg_out);
    }

    void conf_legs_callback_(const starq_interfaces::srv::ConfigureLegs::Request::SharedPtr request,
                                const starq_interfaces::srv::ConfigureLegs::Response::SharedPtr response) {
        (void) response;
        leg_confs_ = request->configs;
        RCLCPP_INFO(this->get_logger(), "Updated leg configurations.");
    }

    void get_info_callback_(const ODriveInfoArray::SharedPtr info_msg_in) const {
        LegInfoArray info_msg_out;
        for (const LegConfig& leg_conf : leg_confs_) {
            ODriveInfoArray motor_info;
            for (uint8_t motor_id : leg_conf.motor_ids) {
                if (size_t(motor_id) >= info_msg_in->infos.size()) {
                    RCLCPP_ERROR(this->get_logger(), "Missing command for leg id: %d", leg_conf.id);
                    return;
                }
                motor_info.infos.push_back(info_msg_in->infos[motor_id]);
            }
            if (model_map_.find(leg_conf.kinematic_type) == model_map_.end()) {
                RCLCPP_ERROR(this->get_logger(), "Could not find kinematic type: %s", leg_conf.kinematic_type.c_str());
                return;
            }
            KinematicModel::Ptr model = model_map_.at(leg_conf.kinematic_type);
            const LegInfo leg_info = model->get_forward(motor_info);
            if (leg_conf.id >= info_msg_out.infos.size())
                info_msg_out.infos.resize(leg_conf.id+1);
            info_msg_out.infos[leg_conf.id] = leg_info;
        }
        info_pub_->publish(info_msg_out);
    }

};

}

#endif