#pragma once
#include "Motor.h"

class MotorMx : public Motor
{
public:
	MotorMx();
	MotorMx(const unsigned char &MOTORID, const string &MotorModel);
	~MotorMx(){};

protected:
	virtual void ReadPresentAngle();
	virtual void ReadPresentVelocity();
	virtual void ReadPresentTorque();

	virtual void WriteScale();
	virtual void WriteVelocity();
	virtual void WriteTorque();
	virtual void WriteTorqueEnable();
};