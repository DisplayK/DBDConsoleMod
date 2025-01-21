#include "TricksterAnimInstance.h"

UTricksterAnimInstance::UTricksterAnimInstance()
{
	this->_isAiming = false;
	this->_isThrowInputPressed = 0.000000;
	this->_isThrowingWithLeftArm = false;
	this->_isThrowingWithRightArm = false;
	this->_throwPlayRate = 1.000000;
	this->_baseThrowDuration = 1.000000;
	this->_consecutiveKnivesThrownStacks = 0;
	this->_timeSinceLastKnifeLaunched = 0.000000;
	this->_currentAmmoCount = 0;
	this->_isInSuperMode = false;
	this->_isInActivation = false;
	this->_activationDuration = 1.500000;
	this->_isInDeactivation = false;
	this->_deactivationDuration = 3.000000;
	this->_throwingKnives = NULL;
}
