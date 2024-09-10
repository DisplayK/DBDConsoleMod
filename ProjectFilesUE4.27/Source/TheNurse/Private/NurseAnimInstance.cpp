#include "NurseAnimInstance.h"

UNurseAnimInstance::UNurseAnimInstance()
{
	this->_isBlinkReady = false;
	this->_isChargingBlink = false;
	this->_isFullyCharged = false;
	this->_blinkSequence = NULL;
	this->_isChainBlinking = false;
	this->_isBlinking = false;
	this->_blinkPlayRate = 0.000000;
	this->_cooldownSequence = NULL;
	this->_isInCooldown = false;
	this->_cooldownPlayRate = 0.000000;
	this->_isChainBlinkAttacking = false;
	this->_isNurse = false;
	this->_animEffectHandlerForSFX = NULL;
	this->_animEffectHandlerForVFX = NULL;
	this->_animEffectHandlerClassForSFX = NULL;
	this->_animEffectHandlerClassForVFX = NULL;
	this->_mySlasher = NULL;
}
