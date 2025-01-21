#include "ScreamComponent.h"
#include "MontagePlaybackDefinition.h"
#include "ECamperDamageState.h"

bool UScreamComponent::TriggerScreamEventsIfPossible(bool fireLoudNoiseEvent, float audibleRange)
{
	return false;
}

bool UScreamComponent::TriggerScreamEventsAndAndAnimationIfPossible(bool fireLoudNoiseEvent, FMontagePlaybackDefinition montageDefinition, float audibleRange)
{
	return false;
}

void UScreamComponent::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
{

}

bool UScreamComponent::CanScream() const
{
	return false;
}

UScreamComponent::UScreamComponent()
{
	this->_perkManager = NULL;
	this->_montagePlayer = NULL;
}
