#include "OnryoVisibilityComponent.h"

void UOnryoVisibilityComponent::OnLocallyObservedChanged()
{

}

void UOnryoVisibilityComponent::OnKillerInSurvivorSightRangeChanged(const bool inRange)
{

}

void UOnryoVisibilityComponent::OnIntroCompleted()
{

}

void UOnryoVisibilityComponent::Multicast_OnManifestationStateChanged_Implementation(const bool isManifested, const bool isImmediateManifest)
{

}

UOnryoVisibilityComponent::UOnryoVisibilityComponent()
{
	this->_isKillerVisible = false;
	this->_isInKillerSightRange = false;
	this->_killerRevealingStateTags = TArray<FGameplayTag>();
	this->_flickerSettings = TMap<EFlickerType, FFlickerSettings>();
	this->_isInIntroPhase = true;
	this->_isManifested = false;
	this->_isInManifestingTransition = false;
}
