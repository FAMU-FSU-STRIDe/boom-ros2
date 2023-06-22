#ifndef STARQ_KINEMATIC_MODEL_FIVEBAR2D_HPP_
#define STARQ_KINEMATIC_MODEL_FIVEBAR2D_HPP_

#include <vector>

#include <starq_leg_kinematics/KinematicModel.hpp>

namespace starq {

class FiveBar2DModel : public KinematicModel {

enum CartesianIndices {X, Y};
enum MotorAngleIndices {A, B};

public:

    FiveBar2DModel(const float L1, const float L2)
    : L1_(L1), L2_(L2) {}

    ODriveCommandArray get_inverse(const LegCommand& cmd) override {
        const std::vector<float> point = cmd.input_pos;
        const float theta0 = std::atan2(point[Y], point[X]);
        const float theta1 = std::atan2(point[Y], -point[X]);
        const float R = std::sqrt(point[X]*point[X] + point[Y]*point[Y]);
        const float alpha = std::acos((R*R + L1_*L1_ - L2_*L2_) / (2.0f*R*L1_));

        ODriveCommandArray cmds;
        cmds.commands.resize(2);
        cmds.commands[A].input_position = (theta0+alpha)/(2.0*M_PI);
        cmds.commands[B].input_position = (theta1+alpha)/(2.0*M_PI);
        return cmds;
    }

    LegInfo get_forward(const ODriveInfoArray& angles) override {
        (void) angles;
        // TODO
        return LegInfo();
    }

private:

    const float L1_, L2_;

};

}

#endif