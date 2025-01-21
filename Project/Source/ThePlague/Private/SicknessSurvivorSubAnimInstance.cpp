#include "SicknessSurvivorSubAnimInstance.h"

USicknessSurvivorSubAnimInstance::USicknessSurvivorSubAnimInstance()
{
	this->_vomitingEnteredStatEvent = TEXT("OnEnterVomiting");
	this->_hitByVomitTime = 1.000000;
	this->_isSick = false;
	this->_isVomiting = false;
	this->_hasRecentlyBeenHitByVomit = false;
	this->_isOpeningExitGate = false;
	this->_isHooked = false;
	this->_isCrawling = false;
	this->_isDead = false;
	this->_isFrightScreaming = false;
	this->_guidedAction = ECamperGuidedAction::VE_None;
	this->_interactionType = EInteractionAnimation::VE_None;
	this->_isInsideCloset = false;
	this->_isInteracting = false;
	this->_isCrouched = false;
	this->_isHoldingAimItem = false;
	this->_isIdle = false;
	this->_isHoldingHandleItem = false;
	this->_isHoldingFlashbang = false;
	this->_isHoldingFirecracker = false;
	this->_isHoldingSmallItem = false;
}
