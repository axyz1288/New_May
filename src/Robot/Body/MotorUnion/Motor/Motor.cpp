#include "Motor.h"

Motor::Motor()
	: motor(),
	  PROTOCOL_VERSION(0.0),
	  BAUDRATE(0),
	  Motor_ID(0),
	  ADDR_TORQUE_ENABLE(0),
	  ADDR_GOAL_POSITION(0),
	  ADDR_GOAL_VELOCITY(0),
	  ADDR_GOAL_TORQUE(0),
	  ADDR_PRESENT_POSITION(0),
	  ADDR_PRESENT_VELOCITY(0),
	  ADDR_PRESENT_TORQUE(0)
{
	connected = false;
	count = 0;
}

Motor::Motor(
	const float &protocol_version,
	const unsigned int &baudrate,
	const unsigned char &id,
	const uint16_t &addr_torque_enable,
	const uint16_t &addr_goal_position,
	const uint16_t &addr_goal_velocity,
	const uint16_t &addr_goal_torque,
	const uint16_t &addr_present_position,
	const uint16_t &addr_present_velocity,
	const uint16_t &addr_present_torque)
	: motor(),
	  PROTOCOL_VERSION(protocol_version),
	  BAUDRATE(baudrate),
	  Motor_ID(id),
	  ADDR_TORQUE_ENABLE(addr_torque_enable),
	  ADDR_GOAL_POSITION(addr_goal_position),
	  ADDR_GOAL_VELOCITY(addr_goal_velocity),
	  ADDR_GOAL_TORQUE(addr_goal_torque),
	  ADDR_PRESENT_POSITION(addr_present_position),
	  ADDR_PRESENT_VELOCITY(addr_present_velocity),
	  ADDR_PRESENT_TORQUE(addr_present_torque)
{
	connected = false;
	count = 0;
}

Motor::~Motor(void)
{
	delete portHandler;
	delete packetHandler;
}

void Motor::ConnectDynamixel(const unsigned char &portNum)
{
	// Set the port path
	string port_path = string("/dev/ttyUSB" + to_string(portNum));

	// Initialize PortHandler & PacketHandler instance
	portHandler = dynamixel::PortHandler::getPortHandler(port_path.c_str());
	packetHandler = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);

	if (portHandler->openPort() & portHandler->setBaudRate(BAUDRATE))
	{
		dxl_comm_result = packetHandler->ping(portHandler, Motor_ID, &dxl_model_number, &dxl_error);
		if (dxl_comm_result != COMM_SUCCESS)
		{
			// printf("%s\n", packetHandler->getTxRxResult(dxl_comm_result));
			portHandler->closePort();
			delete portHandler;
			connected = false;
		}
		else if (dxl_error != 0)
		{
			// printf("%s\n", packetHandler->getRxPacketError(dxl_error));
			portHandler->closePort();
			delete portHandler;
			connected = false;
		}
		else
		{
			// printf("[ID:%03d] ping Succeeded. Dynamixel model number : %d\n", Motor_ID, dxl_model_number);
			connected = true;
		}
	}
	else
	{
		portHandler->closePort();
		delete portHandler;
		connected = false;
	}
}

void Motor::ConnectDynamixel()
{
	if (portHandler->openPort() & portHandler->setBaudRate(BAUDRATE))
	{
		dxl_comm_result = packetHandler->ping(portHandler, Motor_ID, &dxl_model_number, &dxl_error);
		if (dxl_comm_result != COMM_SUCCESS)
		{
			// printf("%s\n", packetHandler->getTxRxResult(dxl_comm_result));
			portHandler->closePort();
			connected = false;
		}
		else if (dxl_error != 0)
		{
			// printf("%s\n", packetHandler->getRxPacketError(dxl_error));
			portHandler->closePort();
			connected = false;
		}
		else
		{
			// printf("[ID:%03d] ping Succeeded. Dynamixel model number : %d\n", Motor_ID, dxl_model_number);
			connected = true;
		}
	}
	else
	{
		portHandler->closePort();
		connected = false;
	}
}

void Motor::WriteData()
{
	// !!!!!! Please write torque enable first
	if (is_Write_TorqueEnable)
	{
		WriteTorqueEnable();
		this_thread::sleep_for(chrono::milliseconds(waiting_delay_ms));
	}
	if (is_Write_Torque)
	{
		WriteTorque();
		this_thread::sleep_for(chrono::milliseconds(waiting_delay_ms));
	}
	if (is_Write_Velocity)
	{
		WriteVelocity();
		this_thread::sleep_for(chrono::milliseconds(waiting_delay_ms));
	}
	if (is_Write_Scale)
	{
		WriteScale();
		this_thread::sleep_for(chrono::milliseconds(waiting_delay_ms));
	}
	if (dxl_comm_result != COMM_SUCCESS)
	{
		printf("%s\n", packetHandler->getTxRxResult(dxl_comm_result));
		connected = false;
	}
	else if (dxl_error != 0)
	{
		printf("%s\n", packetHandler->getRxPacketError(dxl_error));
		connected = false;
	}
	else
		;
}

void Motor::ReadData()
{
	switch (count)
	{
	case 0:
		ReadPresentAngle();
		if (abs(Motor_Angle - Motor_Present_Angle) < 1.0)
			is_Arrival = true;
		else
			is_Arrival = false;
		count = 1;
		break;
	case 1:
		ReadPresentVelocity();
		count = 2;
		break;
	case 2:
		ReadPresentTorque();
		count = 0;
		break;
	default:
		break;
	}
	this_thread::sleep_for(chrono::milliseconds(waiting_delay_ms + 40));

	if (dxl_comm_result != COMM_SUCCESS)
	{
		printf("%s\n", packetHandler->getTxRxResult(dxl_comm_result));
		connected = false;
	}
	else if (dxl_error != 0)
	{
		printf("%s\n", packetHandler->getRxPacketError(dxl_error));
		connected = false;
	}
	else
		;
}

const unsigned char &Motor::GetMotorID() const { return Motor_ID; }
const bool &Motor::GetMotorConnected() const { return connected; }