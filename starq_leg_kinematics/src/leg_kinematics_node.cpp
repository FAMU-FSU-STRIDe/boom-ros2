#include <starq_leg_kinematics/LegKinematicsNode.hpp>
#include <starq_leg_kinematics/models/FiveBar2D.hpp>

using namespace starq;

#define L1 50.0f
#define L2 150.0f
#define GR1 6.0f
#define GR2 6.0f

int main(int argc, char * argv[]) {

    rclcpp::init(argc, argv);

    std::shared_ptr<LegKinematicsNode> node = std::make_shared<LegKinematicsNode>();
    node->add_model("fivebar-2d", std::make_shared<FiveBar2DModel>(L1, L2, GR1, GR2));

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}