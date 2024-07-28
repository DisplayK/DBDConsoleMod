#include "GuardAnimInstance.h"

UGuardAnimInstance::UGuardAnimInstance()
{
	this->_owningGuard = NULL;
	this->_forwardVelocity = 0.000000;
	this->_lateralVelocity = 0.000000;
	this->_animSpeed = 0.000000;
	this->_animDirection = 0.000000;
	this->_isActive = false;
	this->_isPatrolling = false;
	this->_isPatrollingForward = false;
	this->_isHunting = false;
	this->_isTeleporting = false;
}
