#pragma once

#include <Eigen/Core>

class Kinematics
{
public:
    Kinematics();

    Eigen::VectorXd Inverse(Eigen::Vector3d vec);
    Eigen::Vector3d Forward(Eigen::VectorXd vec);

private:
    Eigen::MatrixXd m_matA;
    Eigen::MatrixXd m_matAInverse;
};
