#include "HuntressPowerSubAnimInstance.h"

UHuntressPowerSubAnimInstance::UHuntressPowerSubAnimInstance()
{
	this->_powerIsActive = false;
	this->_powerIsReleased = false;
	this->_powerIsCancelled = false;
	this->_powerIsInCooldown = false;
	this->_aimingPlayRate = 1.000000;
	this->_launchPlayRate = 1.000000;
	this->_cancelPlayRate = 1.000000;
	this->_cooldownPlayRate = 1.000000;
	this->_aimingAnimationSequence = NULL;
	this->_launchAnimationSequence = NULL;
	this->_cancelAnimationSequence = NULL;
	this->_cooldownAnimationSequence = NULL;
}
