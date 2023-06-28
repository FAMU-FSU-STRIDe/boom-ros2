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
    : rclcpp::Node("trajectory_publisher", options), is_running_(false), is_in_fault_state_(false), fault_(0) {
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

        using namespace std::chrono_literals;
        this->feedback_timer_ = this->create_wall_timer(20ms, std::bind(&TrajectoryPublisherServer::feedback_callback_, this));

        RCLCPP_INFO(this->get_logger(), "Trajectory Publisher server initialized.");
    }

private:

    rclcpp_action::Server<RunLegTrajectory>::SharedPtr action_server_;

    rclcpp::Publisher<LegCommandArray>::SharedPtr leg_cmd_pub_;
    rclcpp::Subscription<ODriveInfoArray>::SharedPtr motor_info_sub_;
    rclcpp::Subscription<LegInfoArray>::SharedPtr leg_info_sub_;
    rclcpp::TimerBase::SharedPtr feedback_timer_;

    bool is_running_, is_in_fault_state_, is_recording_;
    uint32_t fault_;
    std::shared_ptr<GoalHandle> goal_handle_;
    RunLegTrajectory::Feedback::SharedPtr trajectory_feedback_;
    RunLegTrajectory::Result::SharedPtr trajectory_result_;

    rclcpp_action::GoalResponse handle_goal_(const rclcpp_action::GoalUUID& uuid, std::shared_ptr<const RunLegTrajectory::Goal> goal) {
        (void) uuid;
        (void) goal;
        RCLCPP_INFO(this->get_logger(), "Received run trajectory request.");
        if (this->is_running_) {
            RCLCPP_INFO(this->get_logger(), "Rejected request. Server already runnning trajectory.");
            return rclcpp_action::GoalResponse::REJECT;
        } else {
            RCLCPP_INFO(this->get_logger(), "Accepted request. Executing trajectory...");
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }
    }

    rclcpp_action::CancelResponse handle_cancel_(const std::shared_ptr<GoalHandle> goal_handle) {
        (void) goal_handle;
        RCLCPP_INFO(this->get_logger(), "Received cancel trajectory request.");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted_(const std::shared_ptr<GoalHandle> goal_handle) {
        this->goal_handle_ = goal_handle;
        this->trajectory_feedback_ = std::make_shared<RunLegTrajectory::Feedback>();
        this->trajectory_result_ = std::make_shared<RunLegTrajectory::Result>();
        this->is_running_ = true;
        this->is_recording_ = goal_handle->get_goal()->record_info;
        std::thread{std::bind(&TrajectoryPublisherServer::execute_, this)}.detach();
    }

    void motor_info_callback_(const ODriveInfoArray::SharedPtr info_msg) {
        if (this->trajectory_result_ && this->is_recording_) {
            this->trajectory_result_->motor_info.push_back(*info_msg);
        }
        for (auto info : info_msg->infos)
            if (info.fault != 0) {
                this->is_in_fault_state_ = true;
                this->fault_ = info.fault;
                return;
            }
        this->is_in_fault_state_ = false;
        this->fault_ = 0;
    }

    void leg_info_callback_(const LegInfoArray::SharedPtr info_msg) {
        if (this->trajectory_result_ && this->is_recording_) {
            this->trajectory_result_->leg_info.push_back(*info_msg);
        }
    }

    void feedback_callback_() {
        if (!this->goal_handle_)
            return;
        goal_handle_->publish_feedback(trajectory_feedback_);
    }

    void execute_() {
        const auto goal = goal_handle_->get_goal();
        uint32_t& loop = trajectory_feedback_->loops_completed;
        rclcpp::Rate loop_rate(goal->publish_rate);
        for (loop = 0; (int(loop) < goal->num_loops) || (goal->num_loops == -1); loop++) {
            for (const auto& cmds : goal->trajectory) {
                if (goal_handle_->is_canceling()) {
                    handle_result_(rclcpp_action::ResultCode::CANCELED);
                    return;
                } else if (this->is_in_fault_state_) {
                    handle_result_(rclcpp_action::ResultCode::ABORTED);
                    return;
                } else {
                    this->leg_cmd_pub_->publish(cmds);
                    loop_rate.sleep();
                }
            }
        }
        handle_result_(rclcpp_action::ResultCode::SUCCEEDED);
    }

    void handle_result_(const rclcpp_action::ResultCode result) {
        trajectory_result_->exit_code = (uint32_t) result;
        trajectory_result_->fault = (uint32_t) this->fault_;
        using namespace rclcpp_action;
        switch (result) {
            case ResultCode::SUCCEEDED:
                goal_handle_->succeed(trajectory_result_);
                RCLCPP_INFO(this->get_logger(), "Trajectory succeeded.");
                break;
            case ResultCode::CANCELED:
                goal_handle_->canceled(trajectory_result_);
                RCLCPP_INFO(this->get_logger(), "Cancelling trajectory.");
                break;
            case ResultCode::ABORTED:
                goal_handle_->abort(trajectory_result_);
                RCLCPP_INFO(this->get_logger(), "Aborting trajectory. (Motor Fault %d)", this->fault_);
                break;
            default:
                // Should never reach this point
                RCLCPP_INFO(this->get_logger(), "Aborting trajectory for unknown reason. (BAD)");
                break;
        }
        this->trajectory_result_ = nullptr;
        this->trajectory_feedback_ = nullptr;
        this->goal_handle_ = nullptr;
        this->is_running_ = false;
    }

};

}

RCLCPP_COMPONENTS_REGISTER_NODE(starq::TrajectoryPublisherServer)