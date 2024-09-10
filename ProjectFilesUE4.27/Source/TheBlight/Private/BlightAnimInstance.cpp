#include "BlightAnimInstance.h"

UBlightAnimInstance::UBlightAnimInstance()
{
	this->_blightPowerStateComponent = NULL;
	this->_powerState = EWallGrabState::None;
	this->_stateTimeRemaining = 0.000000;
	this->_lookAngle = 0.000000;
}
