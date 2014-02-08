#ifndef PORTNUMS_H
#define PORTNUMS_H
#include <WPILib.h>

//Talon Ports
UINT8 leftFrontTalonPort = 5;
UINT8 leftRearTalonPort = 6;
UINT8 rightFrontTalonPort = 3;
UINT8 rightRearTalonPort = 7;
UINT8 catapultTalonOnePort = 4;
UINT8 catapultTalonTwoPort = 8;
UINT8 liftingTalonPort = 1;
UINT8 rollerTalonPort = 2;

//Digital Inputs
UINT8 catapultEncoderPortA = 1;
UINT8 catapultEncoderPortB = 2;
UINT8 upperLimitSensorPort = 5;
UINT8 lowerLimitSensorPort = 4;
UINT8 catapultLimitSwitchPort = 6;

//Analog Inputs
UINT8 ballSensorPort = 7;

//Driver Station Inputs
UINT8 joystickPort = 1;

#endif
