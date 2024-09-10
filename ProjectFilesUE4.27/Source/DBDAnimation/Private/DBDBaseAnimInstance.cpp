#include "DBDBaseAnimInstance.h"

bool UDBDBaseAnimInstance::HasBeenNotified(const FName animNotify) const
{
	return false;
}

UDBDBaseAnimInstance::UDBDBaseAnimInstance()
{
	this->_animEffectBlackBoard = NULL;
	this->_animEffectHandlerForSFX = NULL;
	this->_animEffectHandlerForVFX = NULL;
	this->_animEffectHandlerClassForSFX = NULL;
	this->_animEffectHandlerClassForVFX = NULL;
}
