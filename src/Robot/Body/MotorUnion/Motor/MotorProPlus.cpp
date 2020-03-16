#include "MotorProPlus.h"

MotorProPlus::MotorProPlus()
	: Motor(2.0, 57600, 0, 512, 564, 552, 550, 580, 576, 574) {}

MotorProPlus::MotorProPlus(const unsigned char &MOTORID, const string &MotorModel)
	: Motor(2.0, 57600, MOTORID, 512, 564, 552, 550, 580, 576, 574)
{
	if (MotorModel == "Pro20+")
	{
		Motor_CenterScale = 0;
		Max_Position_Limit = 303454;
		Min_Position_Limit = -303454;
		Max_Velocity_Limit = 2920;
		Min_Velocity_Limit = -2920;
		Max_Torque_Limit = 4500;
		Min_Torque_Limit = -4500;

		Angle2MotorScale = (Max_Position_Limit - Min_Position_Limit) / 360.0;
		MotorScale2Angle = 1.0 / Angle2MotorScale;
		Scale2RPM = 0.01;

		SetMotor_Velocity(0);
		SetMotor_Torque(Max_Torque_Limit);
		SetMotor_TorqueEnable(false);
	}
}

void MotorProPlus::ReadPresentAngle()
{
	uint32_t data = 0;
	dxl_comm_result = packetHandler->read4ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_POSITION, &data, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		Motor_Present_Angle = ((int)data - Motor_CenterScale) * MotorScale2Angle;
}

void MotorProPlus::ReadPresentVelocity()
{
	uint32_t data = 0;
	dxl_comm_result = packetHandler->read4ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_VELOCITY, &data, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		Motor_Present_Velocity = (int)data * Scale2RPM;
}

void MotorProPlus::ReadPresentTorque()
{
	uint16_t data = 0;
	dxl_comm_result = packetHandler->read2ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_TORQUE, &data, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		Motor_Present_Torque = (float)(short)data / Max_Torque_Limit * 100;
}

void MotorProPlus::WriteScale()
{
	dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_POSITION, Motor_Scale, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Scale = false;
}

void MotorProPlus::WriteVelocity()
{
	dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_VELOCITY, Motor_Velocity, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Velocity = false;
}

void MotorProPlus::WriteTorque()
{
	dxl_comm_result = packetHandler->write2ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_TORQUE, Motor_Torque, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Torque = false;
}

void MotorProPlus::WriteTorqueEnable()
{
	dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, Motor_ID, ADDR_TORQUE_ENABLE, Motor_TorqueEnable, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_TorqueEnable = false;
}