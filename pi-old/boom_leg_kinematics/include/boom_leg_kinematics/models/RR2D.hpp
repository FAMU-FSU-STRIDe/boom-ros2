#ifndef BOOM_KINEMATIC_MODEL_RR2D_HPP_
#define BOOM_KINEMATIC_MODEL_RR2D_HPP_

#include <vector>
#include <iostream>

#include <boom_leg_kinematics/KinematicModel.hpp>

namespace boom {

class RR2DModel : public KinematicModel {

enum CartesianIndices {X, Y};
enum MotorAngleIndices {A, B};

public:

    RR2DModel(const float GR1, const float GR2)
    : GR1_(GR1), GR2_(GR2) {}

    ODriveCommandArray get_inverse(const LegCommand& cmd) override {

        const std::vector<float> point = cmd.input_pos;
        const float L1_ = 105;
        const float L2_ = 80;

        if (point.size() != 2)
            return ODriveCommandArray();

        const float x = point[X];
        const float y = point[Y];
        // Everything after this point is just copied from MATLAB functions that already work
        const float t2 = L1_*L1_;
        const float t3 = L2_*L2_;
        const float t4 = x*x;
        const float t5 = y*y;
        const float t6 = L1_*L2_*2.0;
        const float t7 = -t2;
        const float t8 = -t3;
        const float t9 = -t4;
        const float t10 = -t5;
        const float t11 = t4+t5+t6+t7+t8;
        const float t12 = t2+t3+t6+t9+t10;
        const float t13 = 1.0/t11;
        const float t14 = t11*t12;
        const float t15 = std::sqrt(t14);
        // Calculate the hip angle at the output end in radians
        const float theta1 = std::atan((L1_*y*2.0+t2*t13*t15+t3*t13*t15+t9*t13*t15+t10*t13*t15-L1_*L2_*t13*t15*2.0)/(t2+t4+t5+t8+L1_*x*2.0))*2.0;
        // Calculate the knee angle at the output end in radians. Angle relative to the thigh
        const float theta2 = std::atan(t13*t15)*2.0;

        const float thBelt = theta2 + 0.5*theta1; // The angle after the belt that considers the coupling due to the belt
        // Consider adding belt ratio to definition
        const float thGear = 2*thBelt; // The output from the translation gear or the input from the first pulley
        const float thKneeMotor = (GR2_ * thGear)/(2.0*M_PI); // Input angle to the motor connected to the knee
        const float thHipMotor = (GR1_ * theta1)/(2.0*M_PI); // Input angle to the motor connected to the hip
        
        std::cout << "thKneeMotor: " << thKneeMotor << std::endl;
        std::cout << "thHipMotor: " << thHipMotor << std::endl;

        ODriveCommandArray cmds;
        cmds.commands.resize(2);
        cmds.commands[A].input_position = thKneeMotor; // When power wires are on the right of ODrives, motor 1 is the knee
        cmds.commands[B].input_position = thHipMotor;
        return cmds;
    }

    LegInfo get_forward(const ODriveInfoArray& angles) override {
        (void) angles;
        const float L1_ = 105;
        const float L2_ = 80;
        
        std::vector<float> position;
        for (auto info : angles.infos)
            position.push_back(info.pos_estimate);
        
        if (position.size() != 2)
            return LegInfo();

        const float theta1 = 2*M_PI*(position[B]/GR1_); // Global angle of the thigh
        const float thKneeMotor = position[A]; // Angle at the knee motor
        const float thGear = thKneeMotor/GR2_; // After the planetary gear
        const float thBelt = thGear/2.0; // After the belt
        const float theta2 = 2*M_PI*(thBelt - 0.5*theta1); // After accounting for the passive belt coupling

        // Everything after this line is from functioning MATLAB code
        const float t2 = std::cos(theta1);
        const float t3 = std::cos(theta2);
        const float t4 = std::sin(theta1);
        const float t5 = std::sin(theta2);
        
        const float X = L1_*t2+L2_*t2*t3-L2_*t4*t5; // Global X position
        const float Y = L1_*t4+L2_*t2*t5+L2_*t3*t4; // Global Y position

        LegInfo info;
        info.pos_estimate = {X, Y};
        return info;
    }

private:

    const float GR1_, GR2_;

};

}

#endif
