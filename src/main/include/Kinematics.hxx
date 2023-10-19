#pragma once

#include <Eigen/Core>

class Kinematics
{
public:
    static Kinematics &GetInstance()
    {
        static Kinematics kinematics;
        return kinematics;
    }

    Kinematics();

    Eigen::VectorXd Inverse(Eigen::Vector3d vecChassisState);

private:
    Eigen::MatrixXd m_matA;
};
