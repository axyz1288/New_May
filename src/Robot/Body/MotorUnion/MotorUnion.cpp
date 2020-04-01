#include "MotorUnion.h"

MotorUnion::MotorUnion(const vector<unsigned char> &IDArray,
					   const vector<string> &MotorModelArray,
					   vector<unsigned char> &AllPortNumber)
	: waiting_frequency(50),
	  allport(AllPortNumber)
{
	for (unsigned char i = 0; i < IDArray.size(); i++)
	{
		if (MotorModelArray.at(i) == "Pro100" || MotorModelArray.at(i) == "Pro200" || MotorModelArray.at(i) == "Pro20")
			Motor_Union.push_back(new MotorPro(IDArray.at(i), MotorModelArray.at(i)));

		else if (MotorModelArray.at(i) == "Pro20+")
			Motor_Union.push_back(new MotorProPlus(IDArray.at(i), MotorModelArray.at(i)));

		else if (MotorModelArray.at(i) == "Mx106" || MotorModelArray.at(i) == "Mx64")
			Motor_Union.push_back(new MotorMx(IDArray.at(i), MotorModelArray.at(i)));
		else
			;
	}

	if (ConnectAllMotors(AllPortNumber))
		BGON();
}

MotorUnion::~MotorUnion()
{
	_is_deleted_thread_BG = true;
	thread_BG->join();
	delete thread_BG;
}

////////////////////////////////////////////////////////////////////////////////
///  All Motors   //////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
const bool MotorUnion::ConnectAllMotors(vector<unsigned char> &AllPortNumber) const
{
	vector<unsigned char>::iterator it;
	for (it = AllPortNumber.begin(); it != AllPortNumber.end();)
	{
		bool port_gate = false;
		for (int i = 0; i < Motor_Union.size(); i++)
		{
			if (Motor_Union.at(i)->GetMotorConnected() == false)
			{
				Motor_Union.at(i)->ConnectDynamixel(*it);
				port_gate |= Motor_Union.at(i)->GetMotorConnected();
			}
		}
		if (port_gate == true)
			it = AllPortNumber.erase(it);
		else
			++it;
	}

	// Check every motor is connected
	bool connected_port = true;
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		connected_port &= Motor_Union.at(i)->GetMotorConnected();
	}

	return connected_port;
}

const bool MotorUnion::CheckAllMotorsConnected() const
{
	bool tmp = true;
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		Motor_Union.at(i)->ConnectDynamixel();
		tmp &= Motor_Union.at(i)->GetMotorConnected();
	}
	return tmp;
}

const bool MotorUnion::CheckAllMotorsArrival() const
{
	bool tmp = true;
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		tmp = Motor_Union.at(i)->GetMotor_Arrival() & tmp;
	}
	return tmp;
}

void MotorUnion::WaitAllMotorsArrival() const
{
	while (!CheckAllMotorsArrival())
	{
		if (GetAllMotorsTorqueEnable() == false)
			break;
		this_thread::sleep_for(chrono::milliseconds(waiting_frequency));
	}
}

void MotorUnion::WaitAllMotorsArrival(const int &total_waiting_time_ms) const
{
	for (int i = 0; i < total_waiting_time_ms / waiting_frequency; i++)
	{
		if (GetAllMotorsTorqueEnable() == false)
			break;
		this_thread::sleep_for(chrono::milliseconds(waiting_frequency));
	}
}
//------------------------------------------------------------------------------//
/*
	Get Motors Data
*/
const bool MotorUnion::GetAllMotorsTorqueEnable() const
{
	bool tmp = true;
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		tmp &= GetMotor_TorqueEnable(i);
	}
	return tmp;
}

//------------------------------------------------------------------------------//
/*
	Set Motors Data
*/

void MotorUnion::SetAllMotorsAngle(const float &angle) const
{
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		SetMotor_Angle(i, angle);
	}
}

void MotorUnion::SetAllMotorsVelocity(const int &velocity) const
{
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		SetMotor_Velocity(i, velocity);
	}
}

void MotorUnion::SetAllMotorsVelocityWithTime(const short &ms) const
{
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		SetMotor_Velocity_withTime(i, ms);
	}
}

void MotorUnion::SetAllMotorsTorque(const short &torque) const
{
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		SetMotor_Torque(i, torque);
	}
}

void MotorUnion::SetAllMotorsTorqueEnable(const bool &enable) const
{
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		SetMotor_TorqueEnable(i, enable);
	}
}

void MotorUnion::RecoveryState() const
{
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		SetMotor_Torque(i, Motor_Union.at(i)->GetMotor_Torque());
		SetMotor_TorqueEnable(i, Motor_Union.at(i)->GetMotor_TorqueEnable());
	}
}

////////////////////////////////////////////////////////////////////////////////
///   Motor   //////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------------------------------//
/*
	Get Motor Data
*/
const unsigned char &MotorUnion::GetMotor_ID(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotorID();
}

const bool &MotorUnion::GetMotor_Connected(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotorConnected();
}

const float &MotorUnion::GetMotor_Scale2RPM(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Scale2RPM();
}

const short &MotorUnion::GetMotor_CenterScale(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_CenterScale();
}

const float &MotorUnion::GetMotor_Angle(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Angle();
}

const int &MotorUnion::GetMotor_Scale(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Scale();
}

const int &MotorUnion::GetMotor_Velocity(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Velocity();
}

const short &MotorUnion::GetMotor_Torque(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Torque();
}

const bool &MotorUnion::GetMotor_TorqueEnable(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_TorqueEnable();
}

const float &MotorUnion::GetMotor_PresentAngle(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_PresentAngle();
}

const float &MotorUnion::GetMotor_PresentVelocity(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_PresentVelocity();
}

const float &MotorUnion::GetMotor_PresentTorque(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_PresentTorque();
}

const int &MotorUnion::GetMotor_Max_Position_Limit(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Max_Position_Limit();
}

const int &MotorUnion::GetMotor_Min_Position_Limit(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Min_Position_Limit();
}

const int &MotorUnion::GetMotor_Max_Velocity_Limit(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Max_Velocity_Limit();
}

const int &MotorUnion::GetMotor_Min_Velocity_Limit(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Min_Velocity_Limit();
}

const int &MotorUnion::GetMotor_Max_Torque_Limit(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Max_Torque_Limit();
}

const int &MotorUnion::GetMotor_Min_Torque_Limit(const unsigned char &idx) const
{
	return Motor_Union.at(idx)->GetMotor_Min_Torque_Limit();
}
//------------------------------------------------------------------------------//
/*
	Set Motor Data
*/
void MotorUnion::SetMotor_CenterScale(const unsigned char &idx, const short &motor_center_scale) const
{
	Motor_Union.at(idx)->SetMotor_CenterScale(motor_center_scale);
}

void MotorUnion::SetMotor_Angle(const unsigned char &idx, const float &angle) const
{
	Motor_Union.at(idx)->SetMotor_Angle(angle);
}

void MotorUnion::SetMotor_Velocity(const unsigned char &idx, const int &velocity) const
{
	Motor_Union.at(idx)->SetMotor_Velocity(velocity);
}

void MotorUnion::SetMotor_Velocity_withTime(const unsigned char &idx, const short &ms) const
{
	Motor_Union.at(idx)->SetMotor_Velocity(ms);
}

void MotorUnion::SetMotor_Torque(const unsigned char &idx, const short &torque) const
{
	Motor_Union.at(idx)->SetMotor_Torque(torque);
}

void MotorUnion::SetMotor_TorqueEnable(const unsigned char &idx, const bool &enable) const
{
	Motor_Union.at(idx)->SetMotor_TorqueEnable(enable);
}

////////////////////////////////////////////////////////////////////////////////
///   Background   /////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void MotorUnion::BGON()
{
	_is_deleted_thread_BG = false;
	thread_BG = new thread(&MotorUnion::BGReadWrite, this);
}

void MotorUnion::BGReadWrite()
{
	while (!_is_deleted_thread_BG)
	{
		if (CheckAllMotorsConnected())
		{
			if (_is_recovery_state)
			{
				RecoveryState();
				_is_recovery_state = false;
			}
			WriteData();
			ReadData();
		}
		else
			_is_recovery_state = true;
	}
}

void MotorUnion::WriteData() const
{
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		Motor_Union.at(i)->WriteData();
	}
}

void MotorUnion::ReadData() const
{
	for (int i = 0; i < Motor_Union.size(); i++)
	{
		Motor_Union.at(i)->ReadData();
	}
}