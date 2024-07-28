#include "ContaminationSubAnimInstance.h"

UContaminationSubAnimInstance::UContaminationSubAnimInstance()
{
	this->_isContaminated = false;
	this->_isInjectingSerumSelf = false;
	this->_isInjectingSerumOther = false;
	this->_isBeingInjectedWithSerum = false;
	this->_isBeingHealed = false;
	this->_isFirstContaminationHit = false;
	this->_triggerCough = false;
	this->_timeBetweenCough = 20.000000;
	this->_isIdle = false;
	this->_isCrouched = false;
	this->_isInsideCloset = false;
	this->_isInteracting = false;
	this->_isHoldingAimItem = false;
	this->_isCrawling = false;
	this->_isHooked = false;
	this->_isDead = false;
	this->_isFrightScreaming = false;
	this->_isHoldingSmallItem = false;
	this->_isUsingAimItem = false;
	this->_isHoldingHandleItem = false;
	this->_isInjured = false;
	this->_isCarried = false;
	this->_interactionType = EInteractionAnimation::VE_None;
}
