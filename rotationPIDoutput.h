#ifndef ROTATIONPIDOUTPUT_H
#define ROTATIONPIDOUTPUT_H

#include <WPILib.h>

class rotationPIDoutput : public PIDOutput{

	public:
		rotationPIDoutput(RobotDrive *Drivetrain);
		void PIDWrite(float rotationValue);

	private:
		RobotDrive *Drivetrain;
};

#endif
