#include "InteractionSurvivorSubAnimInstance.h"

UInteractionSurvivorSubAnimInstance::UInteractionSurvivorSubAnimInstance()
{
	this->_isAgainstSmallKiller = false;
	this->_isInsideCloset = false;
	this->_isBeingCarried = false;
	this->_isHooked = false;
	this->_isSacrificeStruggling = false;
	this->_sacrificeStrugglePercent = 0.000000;
	this->_selfUnhookFailed = false;
	this->_interactionAnimation = EInteractionAnimation::VE_None;
	this->_isInteractingWithEscapeDoor = false;
}
