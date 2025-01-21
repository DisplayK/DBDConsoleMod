#include "DBDRichPresenceSubsystem.h"

UDBDRichPresenceSubsystem::UDBDRichPresenceSubsystem()
{
	this->_userType = ERichPresenceUserType::Player;
	this->_richPresenceStatus = ERichPresenceStatus::Offline;
	this->_timerRate = 30.000000;
	this->_timerDelay = 10.000000;
	this->_isValidSetup = false;
}
