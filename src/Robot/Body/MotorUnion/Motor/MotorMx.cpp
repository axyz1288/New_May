#include "MotorMx.h"

MotorMx::MotorMx()
	: Motor(1.0, 1000000, 0, 24, 30, 32, 34, 36, 38, 40) {}

MotorMx::MotorMx(const unsigned char &MOTORID, const string &MotorModel)
	: Motor(1.0, 1000000, MOTORID, 24, 30, 32, 34, 36, 38, 40)
{
	if (MotorModel == "Mx106" || MotorModel == "Mx64")
	{
		Motor_CenterScale = 2048;
		Max_Position_Limit = 4095;
		Min_Position_Limit = 0;
		Max_Velocity_Limit = 1023;
		Min_Velocity_Limit = -1023;
		Max_Torque_Limit = 1023;
		Min_Torque_Limit = 0;

		Angle2MotorScale = (Max_Position_Limit - Min_Position_Limit) / 360.0;
		MotorScale2Angle = 1.0 / Angle2MotorScale;
		Scale2RPM = 0.114;

		SetMotor_Velocity(500);
		SetMotor_Torque(200);
		SetMotor_TorqueEnable(true);
	}
}

void MotorMx::ReadPresentAngle()
{
	uint16_t data = 0;
	dxl_comm_result = packetHandler->read2ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_POSITION, &data, &dxl_error);

	// Convert to dregree
	if (dxl_comm_result == COMM_SUCCESS)
		Motor_Present_Angle = ((short)data - Motor_CenterScale) * MotorScale2Angle;
}

void MotorMx::ReadPresentVelocity()
{
	uint16_t data = 0;
	dxl_comm_result = packetHandler->read2ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_VELOCITY, &data, &dxl_error);

	if (dxl_comm_result == COMM_SUCCESS)
	{
		if (data >= Max_Velocity_Limit)
			Motor_Present_Velocity = Max_Velocity_Limit - data;
		else
			Motor_Present_Velocity = (short)data;
		Motor_Present_Velocity *= Scale2RPM;
	}
}

void MotorMx::ReadPresentTorque()
{
	uint16_t data = 0;
	dxl_comm_result = packetHandler->read2ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_TORQUE, &data, &dxl_error);

	if (dxl_comm_result == COMM_SUCCESS)
	{
		if (data >= Max_Torque_Limit)
			Motor_Present_Torque = data - Max_Torque_Limit;
		else
			Motor_Present_Torque = -(short)data;
		Motor_Present_Torque = Motor_Present_Torque / Max_Torque_Limit * 100;
	}
}

void MotorMx::WriteScale()
{
	dxl_comm_result = packetHandler->write2ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_POSITION, (uint16_t)Motor_Scale, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Scale = false;
}

void MotorMx::WriteVelocity()
{
	if (Motor_Velocity < 0)
		Motor_Velocity = abs(Motor_Velocity) + Max_Velocity_Limit;
	dxl_comm_result = packetHandler->write2ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_VELOCITY, (uint16_t)Motor_Velocity, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Velocity = false;
}

void MotorMx::WriteTorque()
{
	dxl_comm_result = packetHandler->write2ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_TORQUE, Motor_Torque, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Torque = false;
}

void MotorMx::WriteTorqueEnable()
{
	dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, Motor_ID, ADDR_TORQUE_ENABLE, Motor_TorqueEnable, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_TorqueEnable = false;
}