#include "MotorPro.h"

MotorPro::MotorPro()
	: Motor(2.0, 57600, 0, 562, 596, 600, 604, 611, 615, 621) {}

MotorPro::MotorPro(const unsigned char &MOTORID, const string &MotorModel)
	: Motor(2.0, 57600, MOTORID, 562, 596, 600, 604, 611, 615, 621)
{
	if (MotorModel == "Pro200")
	{
		Motor_CenterScale = 0;
		Max_Position_Limit = 250961;
		Min_Position_Limit = -250961;
		Max_Velocity_Limit = 17000;
		Min_Velocity_Limit = -17000;
		Max_Torque_Limit = 620;
		Min_Torque_Limit = -620;

		Angle2MotorScale = (Max_Position_Limit - Min_Position_Limit) / 360.0;
		MotorScale2Angle = 1.0 / Angle2MotorScale;
		Scale2RPM = 0.00199234;

		SetMotor_Velocity(5000);
		SetMotor_Torque(Max_Torque_Limit);
		SetMotor_TorqueEnable(true);
	}
	else if (MotorModel == "Pro100")
	{
		Motor_CenterScale = 0;
		Max_Position_Limit = 250961;
		Min_Position_Limit = -250961;
		Max_Velocity_Limit = 17000;
		Min_Velocity_Limit = -17000;
		Max_Torque_Limit = 310;
		Min_Torque_Limit = -310;

		Angle2MotorScale = (Max_Position_Limit - Min_Position_Limit) / 360.0;
		MotorScale2Angle = 1.0 / Angle2MotorScale;
		Scale2RPM = 0.00199234;

		SetMotor_Velocity(0);
		SetMotor_Torque(Max_Torque_Limit);
		SetMotor_TorqueEnable(false);
	}
	else if (MotorModel == "Pro20")
	{
		Motor_CenterScale = 0;
		Max_Position_Limit = 151875;
		Min_Position_Limit = -151875;
		Max_Velocity_Limit = 10300;
		Min_Velocity_Limit = -10300;
		Max_Torque_Limit = 465;
		Min_Torque_Limit = -465;

		Angle2MotorScale = (Max_Position_Limit - Min_Position_Limit) / 360.0;
		MotorScale2Angle = 1.0 / Angle2MotorScale;
		Scale2RPM = 0.00329218;

		SetMotor_Velocity(2000);
		SetMotor_Torque(Max_Torque_Limit);
		SetMotor_TorqueEnable(true);
	}
}

void MotorPro::ReadPresentAngle()
{
	uint32_t data = 0;
	dxl_comm_result = packetHandler->read4ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_POSITION, &data, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		Motor_Present_Angle = ((int)data - Motor_CenterScale) * MotorScale2Angle;
}

void MotorPro::ReadPresentVelocity()
{
	uint32_t data = 0;
	dxl_comm_result = packetHandler->read4ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_VELOCITY, &data, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		Motor_Present_Velocity = (int)data * Scale2RPM;
}

void MotorPro::ReadPresentTorque()
{
	uint16_t data = 0;
	dxl_comm_result = packetHandler->read2ByteTxRx(portHandler, Motor_ID, ADDR_PRESENT_TORQUE, &data, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		Motor_Present_Torque = (float)(short)data / Max_Torque_Limit * 100;
}

void MotorPro::WriteScale()
{
	dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_POSITION, Motor_Scale, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Scale = false;
}

void MotorPro::WriteVelocity()
{
	dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_VELOCITY, Motor_Velocity, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Velocity = false;
}

void MotorPro::WriteTorque()
{
	dxl_comm_result = packetHandler->write2ByteTxRx(portHandler, Motor_ID, ADDR_GOAL_TORQUE, Motor_Torque, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_Torque = false;
}

void MotorPro::WriteTorqueEnable()
{
	dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, Motor_ID, ADDR_TORQUE_ENABLE, Motor_TorqueEnable, &dxl_error);
	if (dxl_comm_result == COMM_SUCCESS)
		is_Write_TorqueEnable = false;
}