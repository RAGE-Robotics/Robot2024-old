#include "Kinematics.hxx"

#include "Constants.hxx"

Kinematics::Kinematics()
{
    m_matA = Eigen::MatrixXd(6, 8);
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

    m_matAInverse = m_matA.inverse();
}

Eigen::VectorXd Kinematics::Inverse(Eigen::Vector3d vec)
{
    return m_matA * vec;
}

Eigen::Vector3d Kinematics::Forward(Eigen::VectorXd vec)
{
    return m_matAInverse * vec;
}
