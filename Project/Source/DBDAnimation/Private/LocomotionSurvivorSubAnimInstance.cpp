#include "LocomotionSurvivorSubAnimInstance.h"

ULocomotionSurvivorSubAnimInstance::ULocomotionSurvivorSubAnimInstance()
{
	this->_isRecoveringWhileCrawling = false;
	this->_isTenacityPerkActive = false;
	this->_wasMovingResetTime = 0.100000;
	this->_isIdle = false;
	this->_shouldPlayLowerCarryAnimation = false;
	this->_isRunning = false;
	this->_isCrouching = false;
	this->_isCrawling = false;
	this->_isDead = false;
	this->_walkAnimSpeed = 0.000000;
	this->_walkAnimStartOffset = 0.000000;
	this->_walkAnimPlayRateMultiplier = 0.000000;
	this->_wasLastDamageSourceDeepWounds = false;
	this->_isStrafing = false;
	this->_isUsingDeadHard = false;
	this->_direction = 0.000000;
	this->_isUsingAimItem = false;
	this->_isBeingCarried = false;
	this->_crawlingDirectionWhileMoving = 0.000000;
	this->_crawlMovingJustStopped = false;
	this->_aimOffsetYawInterpolated = 0.000000;
	this->_allowLookAt = false;
	this->_isDrasticAimOffsetYawChangeDetected = false;
	this->_lookAtAlphaBlendMultiDown = 0.000000;
	this->_lookAtAlphaBlendMultiCenter = 0.000000;
	this->_lookAtAlphaBlendMultiUp = 0.000000;
	this->_lookAtStandIdleAnimationLength = 0.000000;
	this->_aimOffsetYawClampValue = 0.000000;
	this->_maxParadiseWalkCycleOffSet = 1.000000;
	this->_minParadiseWalkPlayRateMultiplier = 0.800000;
	this->_lowerCarryAnimationPresenceTags = TArray<FGameplayTag>();
}
