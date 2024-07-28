#include "ConjoinedTwinAnimInstance.h"

class AConjoinedTwin;

AConjoinedTwin* UConjoinedTwinAnimInstance::GetOwningConjoinedTwin() const
{
	return NULL;
}

UConjoinedTwinAnimInstance::UConjoinedTwinAnimInstance()
{
	this->_owningConjoinedTwin = NULL;
	this->_firstPersonView = false;
	this->_forwardVelocity = 0.000000;
	this->_lateralVelocity = 0.000000;
	this->_interactionType = EInteractionAnimation::VE_None;
	this->_isInAir = false;
	this->_isIdle = false;
	this->_idleTime = 0.000000;
	this->_isAttacking = false;
	this->_attackerComponent = NULL;
	this->_twinAttachmentComponent = NULL;
	this->_twinLockerBlockerComponent = NULL;
	this->_animYaw = 0.000000;
	this->_animPitch = 0.000000;
	this->_isSpectator = false;
	this->_animDirection = 0.000000;
	this->_animSpeed = 0.000000;
	this->_isAttachedToSister = false;
	this->_isAttachedToSurvivor = false;
	this->_isAttachedToFemaleSurvivor = false;
	this->_isChargingTwinJump = false;
	this->_isPossessing = false;
	this->_isWakingUpFromPossess = false;
	this->_isDormant = false;
	this->_isBeingAutoPossessedAfterRelease = false;
	this->_isAttachedToLocker = false;
	this->_attackState = EAttackSubstate::VE_None;
}
