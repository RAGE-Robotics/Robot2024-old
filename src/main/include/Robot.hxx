#pragma once

#include <frc/TimedRobot.h>

class Robot : public frc::TimedRobot
{
public:
    Robot();
    ~Robot();

    void RobotInit() override;
    void RobotPeriodic() override;

    void DisabledInit() override;
    void DisabledPeriodic() override;

    void AutonomousInit() override;
    void AutonomousPeriodic() override;

    void TeleopInit() override;
    void TeleopPeriodic() override;
};
