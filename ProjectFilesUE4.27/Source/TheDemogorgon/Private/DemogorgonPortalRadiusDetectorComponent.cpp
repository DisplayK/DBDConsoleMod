#include "DemogorgonPortalRadiusDetectorComponent.h"
#include "OnPortalEffectsApplied.h"
#include "Net/UnrealNetwork.h"

void UDemogorgonPortalRadiusDetectorComponent::OnRep_PlayersInsideRadius()
{

}

void UDemogorgonPortalRadiusDetectorComponent::Authority_OnLevelReadyToPlay()
{

}

void UDemogorgonPortalRadiusDetectorComponent::Authority_CallOnPortalEffectsApplied(FOnPortalEffectsApplied callback)
{

}

void UDemogorgonPortalRadiusDetectorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDemogorgonPortalRadiusDetectorComponent, _playersInsideRadius);
}

UDemogorgonPortalRadiusDetectorComponent::UDemogorgonPortalRadiusDetectorComponent()
{
	this->Portals = TArray<ADemogorgonPortal*>();
	this->_playersInsideRadius = TArray<ADBDPlayer*>();
}
