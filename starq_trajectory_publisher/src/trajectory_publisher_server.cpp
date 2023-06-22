#include <functional>
#include <memory>
#include <thread>
#include <chrono>
#include <vector>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <starq_interfaces/action/run_leg_trajectory.hpp>

#include <starq_trajectory_publisher/visibility_control.h>

namespace starq {

using namespace starq_interfaces::msg;

class TrajectoryPublisherServer : public rclcpp::Node {

public:

    using RunLegTrajectory = starq_interfaces::action::RunLegTrajectory;
    using GoalHandle = rclcpp_action::ServerGoalHandle<RunLegTrajectory>;

    explicit TrajectoryPublisherServer(const rclcpp::NodeOptions& options = rclcpp::NodeOptions())
    : rclcpp::Node("trajectory_publisher", options) {
        using namespace std::placeholders;
        RCLCPP_INFO(this->get_logger(), "Starting Trajectory Publisher server.");

        this->action_server_ = rclcpp_action::create_server<RunLegTrajectory>(this, "/starq/legs/run_trajectory",
            std::bind(&TrajectoryPublisherServer::handle_goal_, this, _1, _2),
            std::bind(&TrajectoryPublisherServer::handle_cancel_, this, _1),
            std::bind(&TrajectoryPublisherServer::handle_accepted_, this, _1));

        this->motor_info_sub_ = this->create_subscription<ODriveInfoArray>("/starq/motors/info", 10,
            std::bind(&TrajectoryPublisherServer::motor_info_callback_, this, _1));
        this->leg_info_sub_ = this->create_subscription<LegInfoArray>("/starq/legs/info", 10,
            std::bind(&TrajectoryPublisherServer::leg_info_callback_, this, _1));

        this->leg_cmd_pub_ = this->create_publisher<LegCommandArray>("/starq/legs/cmd", 10);

        RCLCPP_INFO(this->get_logger(), "Trajectory Publisher server initialized.");
    }

private:

    rclcpp_action::Server<RunLegTrajectory>::SharedPtr action_server_;

    rclcpp::Publisher<LegCommandArray>::SharedPtr leg_cmd_pub_;
    rclcpp::Subscription<ODriveInfoArray>::SharedPtr motor_info_sub_;
    rclcpp::Subscription<LegInfoArray>::SharedPtr leg_info_sub_;

    RunLegTrajectory::Result::SharedPtr trajectory_result_;
    RunLegTrajectory::Feedback::SharedPtr trajectory_feedback_;

    rclcpp_action::GoalResponse handle_goal_(const rclcpp_action::GoalUUID& uuid, std::shared_ptr<const RunLegTrajectory::Goal> goal) {
        (void) uuid;
        (void) goal;
        RCLCPP_INFO(this->get_logger(), "Received run trajectory request.");
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel_(const std::shared_ptr<GoalHandle> goal_handle) {
        (void) goal_handle;
        RCLCPP_INFO(this->get_logger(), "Received cancel trajectory request.");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted_(const std::shared_ptr<GoalHandle> goal_handle) {
        using namespace std::placeholders;
        this->trajectory_result_ = std::make_shared<RunLegTrajectory::Result>();
        this->trajectory_feedback_ = std::make_shared<RunLegTrajectory::Feedback>();
        std::thread{std::bind(&TrajectoryPublisherServer::execute_, this, _1), goal_handle}.detach();
    }

    void motor_info_callback_(const ODriveInfoArray::SharedPtr info_msg) {
        this->trajectory_result_->motor_infos.emplace_back(*info_msg);
        this->trajectory_feedback_->latest_motor_info = *info_msg;
    }

    void leg_info_callback_(const LegInfoArray::SharedPtr info_msg) {
        this->trajectory_result_->leg_infos.emplace_back(*info_msg);
        this->trajectory_feedback_->lastest_leg_info = *info_msg;
    }

    void execute_(const std::shared_ptr<GoalHandle> goal_handle) {
        RCLCPP_INFO(this->get_logger(), "Running trajectory.");

        const auto goal = goal_handle->get_goal();
        const auto trajectory = goal->trajectory;
        const float publish_rate = goal->publish_rate;
        rclcpp::Rate loop_rate(publish_rate);
        for (const starq_interfaces::msg::LegCommandArray& cmds : trajectory) {
            if (goal_handle->is_canceling())
                goal_handle->canceled(trajectory_result_);
            this->leg_cmd_pub_->publish(cmds);
            goal_handle->publish_feedback(trajectory_feedback_);
            loop_rate.sleep();
        }

        if (rclcpp::ok()) {
            goal_handle->succeed(trajectory_result_);
            RCLCPP_INFO(this->get_logger(), "Trajectory finished.");
        }
    }

};

}

RCLCPP_COMPONENTS_REGISTER_NODE(starq::TrajectoryPublisherServer)