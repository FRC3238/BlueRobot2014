#include <WPILib.h>
#include "robot.h"
#include "portnums.h"

robot::robot(void){
	joystick = new Joystick(joystickPort);
	theChassis = new chassis(leftFrontTalonPort, leftRearTalonPort, rightFrontTalonPort, rightRearTalonPort);
	theCatapult = new catapult(catapultTalonOnePort, catapultTalonTwoPort, catapultEncoderPortA, catapultEncoderPortB, catapultLimitSwitchPort);
}

void robot::RobotInit() {
	theCatapult->SetMotorPower(1.0);
}
	
void robot::DisabledInit() {

}

void robot::AutonomousInit() {

}

void robot::TeleopInit() {

}
	
void robot::DisabledPeriodic() {

}

void robot::AutonomousPeriodic() {

}
	
void robot::TeleopPeriodic() {
	float x = joystick->GetRawAxis(1);
	float y = joystick->GetRawAxis(2);
	float twist = joystick->GetRawAxis(3);
	theChassis->SetJoystickData(x, y, twist);
	if(joystick->GetRawButton(1)){
		theCatapult->SetStoppingPoint(230);
		theCatapult->Fire();
	}
	theCatapult->Idle();
	theChassis->Idle();
}


START_ROBOT_CLASS(robot);
