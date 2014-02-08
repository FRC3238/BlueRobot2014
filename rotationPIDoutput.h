#ifndef ROTATIONPIDOUTPUT_H
#define ROTATIONPIDOUTPUT_H

#include <WPILib.h>
#include "chassis.h"

class rotationPIDoutput : public PIDOutput{

	public:
		rotationPIDoutput(Talon *LeftFrontTalon, Talon *LeftRearTalon, Talon *RightFrontTalon, Talon *RightRearTalon);
		void PIDWrite(float rotationValue);

	private:
		RobotDrive *Drivetrain;
};

#endif
