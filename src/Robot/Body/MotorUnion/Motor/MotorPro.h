#pragma once
#include "Motor.h"

class MotorPro : public Motor
{
public:
	MotorPro();
	MotorPro(const unsigned char &MOTORID, const string &MotorModel);
	~MotorPro(){};

protected:
	virtual void ReadPresentAngle();
	virtual void ReadPresentVelocity();
	virtual void ReadPresentTorque();

	virtual void WriteScale();
	virtual void WriteVelocity();
	virtual void WriteTorque();
	virtual void WriteTorqueEnable();
};