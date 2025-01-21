#include "UnstableRiftTeleportationComponent.h"
#include "UObject/NoExportTypes.h"

void UUnstableRiftTeleportationComponent::Multicast_TeleportUnstableRift_Implementation(const FVector location)
{

}

void UUnstableRiftTeleportationComponent::Multicast_PreTeleportation_Implementation(const FVector& teleportLocation, const bool hadPlayerInteraction)
{

}

void UUnstableRiftTeleportationComponent::Authority_OnLevelReadyToPlay()
{

}

UUnstableRiftTeleportationComponent::UUnstableRiftTeleportationComponent()
{
	this->_spawnType = EGameplayElementType::Generic;
	this->_allUnstableRifts = TArray<AUnstableRift*>();
}
