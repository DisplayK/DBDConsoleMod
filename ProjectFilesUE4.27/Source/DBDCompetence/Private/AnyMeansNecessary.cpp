#include "AnyMeansNecessary.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UAnyMeansNecessary::Authority_OnPalletPullUpStarted(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UAnyMeansNecessary::Authority_OnPalletPulledUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

UAnyMeansNecessary::UAnyMeansNecessary()
{
	this->RevealSurvivorOnPalletPullUpStarted = false;
	this->RevealSurvivorOnPalletPulledUp = false;
	this->RevealSurvivorDuration = 0.000000;
	this->_effect = NULL;
	this->_cooldownDuration = 0.000000;
}
