#include "DemogorgonPortalPlacerStateComponent.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;

void UDemogorgonPortalPlacerStateComponent::UpdateRemainingPortalCount()
{

}

void UDemogorgonPortalPlacerStateComponent::OnLevelReadyToPlay()
{

}

bool UDemogorgonPortalPlacerStateComponent::IsUsePortalCooldownDone() const
{
	return false;
}

void UDemogorgonPortalPlacerStateComponent::InitializeTunableValues(ASlasherPlayer* killer)
{

}

float UDemogorgonPortalPlacerStateComponent::GetTeleportDuration() const
{
	return 0.0f;
}

int32 UDemogorgonPortalPlacerStateComponent::GetRemainingPortalCount() const
{
	return 0;
}

void UDemogorgonPortalPlacerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDemogorgonPortalPlacerStateComponent, _remainingPortals);
	DOREPLIFETIME(UDemogorgonPortalPlacerStateComponent, _placedPortals);
	DOREPLIFETIME(UDemogorgonPortalPlacerStateComponent, _restrictedPortalLocations);
}

UDemogorgonPortalPlacerStateComponent::UDemogorgonPortalPlacerStateComponent()
{
	this->_remainingPortals = 0;
	this->_placedPortals = TArray<ADemogorgonPortal*>();
	this->_restrictedPortalLocations = TArray<FPortalRestrictedLocation>();
}
