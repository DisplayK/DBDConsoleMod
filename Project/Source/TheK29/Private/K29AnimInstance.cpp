#include "K29AnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UK29AnimInstance::ResetStartThrowingSurvivor()
{

}

void UK29AnimInstance::ResetHasRushEndedInSurvivorImpact()
{

}

void UK29AnimInstance::ResetHasRushEndedInLedgeDrop()
{

}

void UK29AnimInstance::ResetHasInstantlyPickedUpSurvivor()
{

}

void UK29AnimInstance::OnStartThrowingSurvivor()
{

}

void UK29AnimInstance::OnHasRushEndedInSurvivorImpact()
{

}

void UK29AnimInstance::OnHasRushEndedInLedgeDrop()
{

}

void UK29AnimInstance::OnHasInstantlyPickedUpSurvivor()
{

}

void UK29AnimInstance::OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UK29AnimInstance::UK29AnimInstance()
{
	this->_isRushing = false;
	this->_isHoldingSurvivor = false;
	this->_isChargingRushing = false;
	this->_isBetweenRushes = false;
	this->_isThrowing = false;
	this->_isBouncingBack = false;
	this->_hasStartedFinalRush = false;
	this->_hasRushEndedInSurvivorImpact = false;
	this->_hasRushEndedInLedgeDrop = false;
	this->_hasInstantlyPickedUpSurvivor = false;
	this->_isReadyToRushButHasNoPath = false;
}
