#include "IsPlayerPerformingInteraction.h"
#include "GameplayTagContainer.h"
#include "Net/UnrealNetwork.h"

class UInteractionDefinition;

void UIsPlayerPerformingInteraction::UpdateIsTrue(UInteractionDefinition* interactionDefinition)
{

}

void UIsPlayerPerformingInteraction::SetInteractionSemantics(const FGameplayTagContainer& interactionSemantics)
{

}

void UIsPlayerPerformingInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UIsPlayerPerformingInteraction, _interactionSemantics);
}

UIsPlayerPerformingInteraction::UIsPlayerPerformingInteraction()
{

}
