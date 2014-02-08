#include <WPILib.h>
#include "rotationPIDoutput.h"

rotationPIDoutput::rotationPIDoutput(Talon *LeftFrontTalon, Talon *LeftRearTalon, Talon *RightFrontTalon, Talon *RightRearTalon){
	Drivetrain = new RobotDrive(LeftFrontTalon, LeftRearTalon, RightFrontTalon, RightRearTalon);
}

void rotationPIDoutput::PIDWrite(float rotationValue){
	Drivetrain->MecanumDrive_Cartesian(0, 0, rotationValue);
}
