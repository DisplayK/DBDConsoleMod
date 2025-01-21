#include "PlayerInteractionListenerComponent.h"
#include "GameplayTagContainer.h"

class ADBDPlayer;
class AActor;

void UPlayerInteractionListenerComponent::UnlistenToInteractionStart(ADBDPlayer* player, const FGameplayTag& interactionSemantic)
{

}

void UPlayerInteractionListenerComponent::UnlistenToInteractionEnd(ADBDPlayer* player, const FGameplayTag& interactionSemantic)
{

}

void UPlayerInteractionListenerComponent::OnActorDestroyed(AActor* destroyedActor)
{

}

void UPlayerInteractionListenerComponent::ListenToInteractionStart(ADBDPlayer* player, const FGameplayTag& interactionSemantic, const FInteractionDelegate& interactionDelegate)
{

}

void UPlayerInteractionListenerComponent::ListenToInteractionEnd(ADBDPlayer* player, const FGameplayTag& interactionSemantic, const FInteractionDelegate& interactionDelegate)
{

}

UPlayerInteractionListenerComponent::UPlayerInteractionListenerComponent()
{

}
