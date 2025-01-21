#include "SlasherHitsWhileCarryingTrackerComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void USlasherHitsWhileCarryingTrackerComponent::OnPostAttack(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void USlasherHitsWhileCarryingTrackerComponent::OnPickup(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void USlasherHitsWhileCarryingTrackerComponent::OnAttack(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

USlasherHitsWhileCarryingTrackerComponent::USlasherHitsWhileCarryingTrackerComponent()
{
	this->_campersHitDuringLastCarry = TSet<ACamperPlayer*>();
}
