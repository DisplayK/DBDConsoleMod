#include "GuardOrderBase.h"

UGuardOrderBase::UGuardOrderBase()
{
	this->_shouldWaitForCurrentInteraction = false;
	this->_explodeInteractableAnimNotifyID = NAME_None;
}
