#include "K24PowerAnimInstance.h"

void UK24PowerAnimInstance::OnLevelReadyToPlay()
{

}

void UK24PowerAnimInstance::OnKillerPowerLevelChanged(int32 powerLevel)
{

}

void UK24PowerAnimInstance::OnIntroCompleted()
{

}

UK24PowerAnimInstance::UK24PowerAnimInstance()
{
	this->_owningKiller = NULL;
	this->_isInPowerMode = false;
	this->_isChargingPower = false;
	this->_isK24PowerAttacking = false;
	this->_isRequestingPowerAttack = false;
	this->_tentacleLength = 0.000000;
	this->_isFirstPersonView = false;
	this->_attackSubState = EAttackSubstate::VE_None;
	this->_isIntroCompleted = false;
	this->_isLevelReadyToPlay = false;
	this->_powerLevel = 1;
	this->_forwardVelocity = 0.000000;
	this->_lateralVelocity = 0.000000;
	this->_isIdle = true;
	this->_isKilling = false;
	this->_swingIdleTPVSequences = NULL;
	this->_wipeIdleTPVSequences = NULL;
	this->_missIdleTPVSequences = NULL;
	this->_bowIdleTPVSequences = NULL;
	this->_swingIdleTPVSequence = NULL;
	this->_wipeIdleTPVSequence = NULL;
	this->_missIdleTPVSequence = NULL;
	this->_bowIdleTPVSequence = NULL;
	this->_swingLocoTPVSequence = NULL;
	this->_wipeLocoTPVSequence = NULL;
	this->_missLocoTPVSequence = NULL;
	this->_bowLocoTPVSequence = NULL;
	this->_swingFPVSequences = NULL;
	this->_wipeFPVSequences = NULL;
	this->_missFPVSequences = NULL;
	this->_bowFPVSequences = NULL;
	this->_swingFPVSequence = NULL;
	this->_wipeFPVSequence = NULL;
	this->_missFPVSequence = NULL;
	this->_bowFPVSequence = NULL;
	this->_k24Power = NULL;
}
