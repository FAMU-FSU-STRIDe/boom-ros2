#include <rclcpp/rclcpp.hpp>
#include <sbmpo_ros2/SBMPOActionServer.hpp>
#include <sbmpo/models/UnicycleSteeringModel.hpp>
#include <nvblox_msgs/msg/distance_map_slice.hpp>

#include <rclcpp_components/register_node_macro.hpp>

namespace starq_sbmpo {

using namespace sbmpo;
using namespace sbmpo_ros2;

/*
    SBMPO MODEL
*/

class STARQModel : public sbmpo_models::UnicycleSteeringModel {

public:

    STARQModel() 
    : sbmpo_models::UnicycleSteeringModel() {
        min_distance_to_obstacle_ = 1.0f;
    }

    bool is_valid(const State& state) override {
        return map_lookup_(state[X], state[Y]) > min_distance_to_obstacle_;
    }

    float cost(const State& state1, const State& state2, const Control& control, const float time_span) override {
        const float distance_cost = sbmpo_models::UnicycleSteeringModel::cost(state1, state2, control, time_span);
        const float map_cost = costmap(state2[X], state2[Y]);
        return distance_cost + map_cost;
    }

    void update_map(const nvblox_msgs::msg::DistanceMapSlice::ConstSharedPtr sdf) {
        this->sdf_ = sdf;
    }

    float costmap(const float x, const float y) {
        const float dist_to_obstacle = map_lookup_(x,y);
        if (dist_to_obstacle != std::numeric_limits<float>::infinity()) {
            // TODO: Map obstacle distances to costs
        }
        return 0;
    }

private:

    float min_distance_to_obstacle_;
    nvblox_msgs::msg::DistanceMapSlice::ConstSharedPtr sdf_;

    // Map lookup function
    float map_lookup_(const float x, const float y) {

        // See if slice exists
        if (this->sdf_ == nullptr)
            return std::numeric_limits<float>::infinity();

        // Get the map indices
        float x_index = round((x - this->sdf_->origin.x) / this->sdf_->resolution);
        float y_index = round((y - this->sdf_->origin.y) / this->sdf_->resolution);

        // Check map bounds
        if (x_index < 0 || x_index >= static_cast<int>(this->sdf_->width) ||
            y_index < 0 || y_index >= static_cast<int>(this->sdf_->height))
            return std::numeric_limits<float>::infinity();

        // Convert to index
        size_t index = y_index * this->sdf_->width + x_index;

        // Grab value from slice
        float distance = this->sdf_->data[index];

        // Check if unknown
        if (distance == this->sdf_->unknown_value)
            return std::numeric_limits<float>::infinity();
        
        return distance;
    }

};

/*
    ACTION SERVER
*/

class STARQActionServer : public SBMPOActionServer<STARQModel> {

public:

    STARQActionServer(const rclcpp::NodeOptions& options = rclcpp::NodeOptions())
    : SBMPOActionServer<STARQModel>("starq_sbmpo", options) {
        sdf_sub_ = this->create_subscription<nvblox_msgs::msg::DistanceMapSlice>(
            "/nvblox_node/map_slice",
            10,
            std::bind(&STARQModel::update_map, this->sbmpo_.model(), std::placeholders::_1));
    }

private:

    rclcpp::Subscription<nvblox_msgs::msg::DistanceMapSlice>::SharedPtr sdf_sub_;

};

}

RCLCPP_COMPONENTS_REGISTER_NODE(starq_sbmpo::STARQActionServer)