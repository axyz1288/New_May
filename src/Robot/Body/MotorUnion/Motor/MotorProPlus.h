#pragma once
#include "Motor.h"

class MotorProPlus : public Motor
{
public:
	MotorProPlus();
	MotorProPlus(const unsigned char &MOTORID, const string &MotorModel);
	~MotorProPlus(){};

protected:
	virtual void ReadPresentAngle();
	virtual void ReadPresentVelocity();
	virtual void ReadPresentTorque();

	virtual void WriteScale();
	virtual void WriteVelocity();
	virtual void WriteTorque();
	virtual void WriteTorqueEnable();
};