#include "Kinematics.hxx"

#include "Constants.hxx"

Kinematics::Kinematics() : m_matA(8, 3)
{
    m_matA(0, 0) = 1;
    m_matA(0, 2) = -Constants::CHASSIS_WIDTH / 2;
    m_matA(1, 1) = 1;
    m_matA(1, 2) = Constants::CHASSIS_WIDTH / 2;
    m_matA(2, 0) = 1;
    m_matA(2, 2) = Constants::CHASSIS_WIDTH / 2;
    m_matA(3, 1) = 1;
    m_matA(3, 2) = Constants::CHASSIS_WIDTH / 2;
    m_matA(4, 0) = 1;
    m_matA(4, 2) = -Constants::CHASSIS_WIDTH / 2;
    m_matA(5, 1) = 1;
    m_matA(5, 2) = Constants::CHASSIS_WIDTH / 2;
    m_matA(6, 0) = 1;
    m_matA(6, 2) = Constants::CHASSIS_WIDTH / 2;
    m_matA(7, 1) = 1;
    m_matA(7, 2) = -Constants::CHASSIS_WIDTH / 2;
}

Eigen::VectorXd Kinematics::Inverse(Eigen::Vector3d vecChassisState)
{
    return m_matA * vecChassisState;
}
