#include "BaseKillerWeaponAnimInstance.h"

UBaseKillerWeaponAnimInstance::UBaseKillerWeaponAnimInstance()
{
	this->_attackState = EAttackSubstate::VE_None;
	this->_isCarrying = false;
	this->_isActive = false;
	this->_attackInPlayRate = 1.000000;
	this->_attackSwingPlayRate = 1.000000;
	this->_attackMissPlayRate = 1.000000;
	this->_attackHitPlayRate = 1.000000;
	this->_attackBounceOfWallPlayRate = 1.000000;
	this->_firstPersonView = false;
}
