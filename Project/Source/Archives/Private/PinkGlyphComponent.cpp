#include "PinkGlyphComponent.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"

class AActor;

void UPinkGlyphComponent::OnRep_MarkedProgress()
{

}

void UPinkGlyphComponent::OnRep_IsPinkGlyphActive() const
{

}

void UPinkGlyphComponent::OnRep_IsMarking() const
{

}

void UPinkGlyphComponent::OnRep_HasLineOfSightToSurvivor() const
{

}

void UPinkGlyphComponent::Multicast_TeleportGlyph_Implementation(const FVector& location)
{

}

void UPinkGlyphComponent::Multicast_StartGlyphPreTeleport_Implementation()
{

}

void UPinkGlyphComponent::Multicast_IsFullyMarkedSurvivor_Implementation()
{

}

void UPinkGlyphComponent::Multicast_EnterGlyphRange_Implementation()
{

}

bool UPinkGlyphComponent::IsMarking() const
{
	return false;
}

void UPinkGlyphComponent::Authority_TeleportGlyph()
{

}

void UPinkGlyphComponent::Authority_OnSurvivorInMovementRangeChanged(const bool inRange)
{

}

void UPinkGlyphComponent::Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor)
{

}

void UPinkGlyphComponent::Authority_OnLevelReadyToPlay()
{

}

void UPinkGlyphComponent::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
{

}

void UPinkGlyphComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPinkGlyphComponent, _markedProgress);
	DOREPLIFETIME(UPinkGlyphComponent, _isPinkGlyphActive);
	DOREPLIFETIME(UPinkGlyphComponent, _isMarking);
	DOREPLIFETIME(UPinkGlyphComponent, _hasLineOfSightToSurvivor);
}

UPinkGlyphComponent::UPinkGlyphComponent()
{
	this->_exposedStatusEffect = NULL;
	this->_checkLineOfSightDelay = 0.100000;
	this->_isPinkGlyphActive = false;
	this->_isMarking = false;
	this->_hasLineOfSightToSurvivor = false;
	this->_teleportPoints = TArray<UTileSpawnPoint*>();
}
