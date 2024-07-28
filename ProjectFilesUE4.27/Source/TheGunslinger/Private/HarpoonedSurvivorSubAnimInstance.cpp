#include "HarpoonedSurvivorSubAnimInstance.h"

UHarpoonedSurvivorSubAnimInstance::UHarpoonedSurvivorSubAnimInstance()
{
	this->_linkedMaxSpeed = 220.000000;
	this->_timeBeforeHarpoonHitReset = 0.200000;
	this->_hitHarpoonedEnterEvent = TEXT("HitHarpooned_EnterState");
	this->_chainBreakEnterEvent = TEXT("ChainBreak_EnterState");
	this->_isChainLinked = false;
	this->_isBeingReeled = false;
	this->_hasLinkInput = false;
	this->_linkInputX = 0.000000;
	this->_linkInputY = 0.000000;
	this->_chainBreakTrigger = false;
	this->_triggerHarpoonHit = false;
	this->_harpoonHitTurnAnimNormalizedStartTime = 0.000000;
	this->_harpoonHitAnimTurnRight = false;
	this->_isCrawling = false;
	this->_isIdle = false;
	this->_walkAnimSpeed = 0.000000;
	this->_yaw = 0.000000;
	this->_pitch = 0.000000;
}
