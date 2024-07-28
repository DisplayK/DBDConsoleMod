#include "TwinLockerBlockerComponent.h"
#include "AnimationMontageDescriptor.h"

class ADBDPlayer;

void UTwinLockerBlockerComponent::OnPushedMontageStopped(const FAnimationMontageDescriptor montageDescriptor)
{

}

void UTwinLockerBlockerComponent::OnPushedMontageStarted(const FAnimationMontageDescriptor montageDescriptor, const float rate)
{

}

void UTwinLockerBlockerComponent::OnPushedMontageEnded(const FAnimationMontageDescriptor montageDescriptor, bool interrupted)
{

}

void UTwinLockerBlockerComponent::OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker)
{

}

bool UTwinLockerBlockerComponent::IsTwinAttachedToLocker() const
{
	return false;
}

void UTwinLockerBlockerComponent::Authority_OnLevelReadyToPlay()
{

}

UTwinLockerBlockerComponent::UTwinLockerBlockerComponent()
{
	this->_interactionClasses = TArray<TSubclassOf<UInteractionDefinition>>();
	this->_interactionsToDisableOnLockerClasses = TArray<TSubclassOf<UInteractionDefinition>>();
}
