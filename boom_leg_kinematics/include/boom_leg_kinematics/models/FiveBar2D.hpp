#ifndef BOOM_KINEMATIC_MODEL_FIVEBAR2D_HPP_
#define BOOM_KINEMATIC_MODEL_FIVEBAR2D_HPP_

#include <vector>

#include <boom_leg_kinematics/KinematicModel.hpp>

namespace boom
{

    class FiveBar2DModel : public KinematicModel
    {

        enum CartesianIndices
        {
            X,
            Y
        };
        enum MotorAngleIndices
        {
            A,
            B
        };

    public:
        FiveBar2DModel(const float L1, const float L2, const float GR1, const float GR2)
            : L1_(L1), L2_(L2), GR1_(GR1), GR2_(GR2) {}

        ODriveCommandArray get_inverse(const LegCommand &cmd) override
        {

            const std::vector<float> point = cmd.input_pos;

            if (point.size() != 2)
                return ODriveCommandArray();

            const float theta0 = std::atan2(-point[Y], point[X]);
            const float theta1 = std::atan2(-point[Y], -point[X]);

            const float R = std::sqrt(point[X] * point[X] + point[Y] * point[Y]);
            const float alpha = std::acos((R * R + L1_ * L1_ - L2_ * L2_) / (2.0f * R * L1_));

            ODriveCommandArray cmds;
            cmds.commands.resize(2);
            cmds.commands[A].input_position = GR1_ * (theta0 - alpha) / (2.0 * M_PI);
            cmds.commands[B].input_position = GR2_ * (theta1 - alpha) / (2.0 * M_PI);
            return cmds;
        }

        LegInfo get_forward(const ODriveInfoArray &angles) override
        {
            (void)angles;

            std::vector<float> position;
            for (auto info : angles.infos)
                position.push_back(info.pos_estimate);

            if (position.size() != 2)
                return LegInfo();

            const float alpha = 0.5f * (M_PI - position[A] / GR1_ - position[B] / GR2_);
            const float gamma = std::asin(L1_ * std::sin(alpha) / L2_);
            const float phi = M_PI - alpha - gamma;

            const float theta = -(position[A] + alpha);
            const float R = L2_ * std::sin(phi) / std::sin(alpha);

            const float X = R * std::cos(theta);
            const float Y = R * std::sin(theta);

            LegInfo info;
            info.pos_estimate = {X, Y};
            return info;
        }

    private:
        const float L1_, L2_, GR1_, GR2_;
    };

}

#endif