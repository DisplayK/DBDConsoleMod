#include "BasePlayerAttackSubAnimInstance.h"

UBasePlayerAttackSubAnimInstance::UBasePlayerAttackSubAnimInstance()
{
	this->_attackState = EAttackSubstate::VE_None;
	this->_direction = 0.000000;
	this->_strafeAngle = 45.000000;
	this->_isStrafe = false;
	this->_attackInPlayRate = 1.000000;
	this->_attackSwingPlayRate = 1.000000;
	this->_attackMissPlayRate = 1.000000;
	this->_attackHitPlayRate = 1.000000;
	this->_attackBounceOfWallPlayRate = 1.000000;
	this->_firstPersonView = false;
}
