#include "K29SurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK29SurvivorAnimInstance::ResetHasBeenThrown()
{

}

void UK29SurvivorAnimInstance::OnHasBeenThrown()
{

}

void UK29SurvivorAnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK29SurvivorAnimInstance::UK29SurvivorAnimInstance()
{
	this->_isBeingGrabbed = false;
	this->_isBeingThrown = false;
	this->_isKillerLocallyControlled = false;
	this->_isUsingInfectionRemoverOnSelf = false;
	this->_isUsingInfectionRemoverOnOther = false;
	this->_isInfectionRemoverUsedOnSelf = false;
	this->_hasLastThrowResultedInDamage = false;
	this->_isInfectionActive = false;
	this->_hasBeenThrown = false;
	this->_isCoughing = false;
	this->_timeBetweenRandomCoughingTry = 2.000000;
	this->_randomCoughMinProbabilityRange = 0.000000;
	this->_randomCoughMaxProbabilityRange = 4.000000;
	this->_randomCoughProbabilityThreshold = 1.000000;
	this->_isCrawling = false;
	this->_isInsideCloset = false;
	this->_isDead = false;
	this->_isInteracting = false;
	this->_isInjured = false;
	this->_isHoldingObject = false;
	this->_isCrouched = false;
	this->_isHooked = false;
	this->_isIdle = false;
	this->_isUsingAimItem = false;
	this->_isInAir = false;
	this->_isBeingHealed = false;
}
