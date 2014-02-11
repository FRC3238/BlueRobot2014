#include <WPILib.h>
#include "rotationPIDoutput.h"

rotationPIDoutput::rotationPIDoutput(RobotDrive *Drivetrain){
	
}

void rotationPIDoutput::PIDWrite(float rotationValue){
	Drivetrain->MecanumDrive_Cartesian(0, 0, rotationValue);
}
