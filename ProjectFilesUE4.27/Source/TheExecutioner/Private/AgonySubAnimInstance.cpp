#include "AgonySubAnimInstance.h"

UAgonySubAnimInstance::UAgonySubAnimInstance()
{
	this->_isInAgony = false;
	this->_isInTormentTrail = false;
	this->_isInTormentTrailEffect = false;
	this->_isInDeathBed = false;
	this->_isDeadInDeathBed = false;
	this->_isInStruggleInDeathBed = false;
	this->_isIdle = false;
	this->_isCrouched = false;
	this->_isCrawling = false;
	this->_walkAnimSpeed = 0.000000;
	this->_interactionType = EInteractionAnimation::VE_None;
	this->_isInjured = false;
	this->_isBeingCarried = false;
}
