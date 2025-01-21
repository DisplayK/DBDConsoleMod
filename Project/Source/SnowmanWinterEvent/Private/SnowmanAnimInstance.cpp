#include "SnowmanAnimInstance.h"

USnowmanAnimInstance::USnowmanAnimInstance()
{
	this->_isIdle = false;
	this->_isBeingEntered = false;
	this->_isControlled = false;
	this->_isDestroyed = false;
	this->_isBeingDestroyedDueToSurvivorRunExit = false;
	this->_isBeingDestroyedDueToKillerAttackExit = false;
	this->_isBeingDestroyedDueToKillerAttackWhileControlled = false;
	this->_isBeingDestroyedDueToKillerAttackWhileEmpty = false;
	this->_isSurvivorUsingSnowmanMoving = false;
	this->_snowman = NULL;
	this->_playerUsingSnowman = NULL;
}
