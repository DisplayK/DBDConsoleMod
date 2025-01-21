#include "KillerAnimInstance.h"

FName UKillerAnimInstance::GetWeaponCustomizationId() const
{
	return NAME_None;
}

UKillerAnimInstance::UKillerAnimInstance()
{
	this->_isAnyMontagePlaying = false;
	this->_isCarrying = false;
	this->_isInAir = false;
	this->_isSpectator = false;
	this->_isIdle = false;
	this->_animDirection = 0.000000;
	this->_animSpeed = 0.000000;
	this->_animPitch = 0.000000;
	this->_animYaw = 0.000000;
	this->_pelvisHeight = 0.000000;
	this->_idleTime = 0.000000;
	this->_directionSwitch = 0;
	this->_isAttacking = false;
	this->_isPlayingAnyMontage = false;
	this->_isKilling = false;
	this->_interactionType = EInteractionAnimation::VE_None;
	this->_armIKSensorComponent = NULL;
	this->_attackState = EAttackSubstate::VE_None;
	this->_forwardVelocity = 0.000000;
	this->_lateralVelocity = 0.000000;
}
