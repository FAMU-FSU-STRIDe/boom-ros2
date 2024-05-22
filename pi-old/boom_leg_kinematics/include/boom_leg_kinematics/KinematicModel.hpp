#ifndef BOOM_KINEMATIC_MODEL_HPP_
#define BOOM_KINEMATIC_MODEL_HPP_

#include <memory>
#include <math.h>

#include <boom_interfaces/msg/leg_command.hpp>
#include <boom_interfaces/msg/leg_info.hpp>
#include <boom_interfaces/msg/o_drive_command_array.hpp>
#include <boom_interfaces/msg/o_drive_info_array.hpp>

namespace boom {

using namespace boom_interfaces::msg;

class KinematicModel {

public:

    using Ptr = std::shared_ptr<KinematicModel>;

    virtual ODriveCommandArray get_inverse(const LegCommand& leg_cmd) = 0;

    virtual LegInfo get_forward(const ODriveInfoArray& motor_cmd) = 0;

};

}

#endif