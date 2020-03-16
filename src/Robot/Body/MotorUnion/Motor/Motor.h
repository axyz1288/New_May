#pragma once
#include "dynamixel/DynamixelSDK.h"
#include "./motor/motor.h"
#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>

using namespace std;

class Motor : public motor
{
public:
	Motor();
	/* 
	@ Protocol_version,
	@ Baudrate,  
	@ Id,
	@ Addr_torque_enable,
	@ Addr_goal_position, 
	@ Addr_goal_velocity, 
	@ Addr_goal_torque, 
	@ Addr_present_position, 
	@ Addr_present_velocity,
	@ Addr_present_torque 
	*/
	Motor(
		const float &,
		const unsigned int &,
		const unsigned char &,
		const uint16_t &,
		const uint16_t &,
		const uint16_t &,
		const uint16_t &,
		const uint16_t &,
		const uint16_t &,
		const uint16_t &);
	~Motor();

	/*Following functions "doesn't" need to be implemented*/
	void ConnectDynamixel(const unsigned char &portNum);
	void ConnectDynamixel();
	//--------------------------//
	void WriteData();
	void ReadData();
	//--------------------------//
	const unsigned char &GetMotorID() const;
	const bool &GetMotorConnected() const;
	const bool &isBeginningConnected() const;

protected:
	/*Following functions "have to" be implemented individually*/
	virtual void ReadPresentAngle() = 0;
	virtual void ReadPresentVelocity() = 0;
	virtual void ReadPresentTorque() = 0;

	virtual void WriteScale() = 0;
	virtual void WriteVelocity() = 0;
	virtual void WriteTorque() = 0;
	virtual void WriteTorqueEnable() = 0;

protected:
	dynamixel::PortHandler *portHandler;
	dynamixel::PacketHandler *packetHandler;

	/* Dynamixel attributes (see e-manual) */
	const float PROTOCOL_VERSION;
	const int BAUDRATE;
	const unsigned char Motor_ID;
	const uint16_t ADDR_TORQUE_ENABLE;
	const uint16_t ADDR_GOAL_POSITION;
	const uint16_t ADDR_GOAL_VELOCITY;
	const uint16_t ADDR_GOAL_TORQUE;
	const uint16_t ADDR_PRESENT_POSITION;
	const uint16_t ADDR_PRESENT_VELOCITY;
	const uint16_t ADDR_PRESENT_TORQUE; // equal to current address

	/* About connection */
	int dxl_comm_result;
	uint8_t dxl_error;
	uint16_t dxl_model_number; // Dynamixel model number
	bool connected;
	char count;
};

const static int waiting_delay_ms = 10;
