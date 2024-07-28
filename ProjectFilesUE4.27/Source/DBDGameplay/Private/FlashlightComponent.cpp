#include "FlashlightComponent.h"
#include "Net/UnrealNetwork.h"

class UFlashlightableComponent;

void UFlashlightComponent::TurnOn()
{

}

void UFlashlightComponent::TurnOff()
{

}

void UFlashlightComponent::Server_SetAndUpdateAutonomousLitFlashlightables_Implementation(const TArray<UFlashlightableComponent*>& newLitFlashlightables)
{

}

bool UFlashlightComponent::Server_SetAndUpdateAutonomousLitFlashlightables_Validate(const TArray<UFlashlightableComponent*>& newLitFlashlightables)
{
	return true;
}

void UFlashlightComponent::OnRep_ReplicatedLitFlashlightables()
{

}

void UFlashlightComponent::OnRep_IsOwnerLagging()
{

}

bool UFlashlightComponent::IsOn() const
{
	return false;
}

float UFlashlightComponent::GetEffectiveTimeToBlindModifier() const
{
	return 0.0f;
}

float UFlashlightComponent::GetEffectiveBlindnessDuration() const
{
	return 0.0f;
}

void UFlashlightComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UFlashlightComponent, _replicatedLitFlashlightables);
	DOREPLIFETIME(UFlashlightComponent, _isOwnerLagging);
}

UFlashlightComponent::UFlashlightComponent()
{
	this->_baseAccuracy = 1.000000;
	this->_lagDuration = 0.200000;
	this->_flashlightables = TSet<UFlashlightableComponent*>();
	this->_autonomousLitFlashlightables = TSet<UFlashlightableComponent*>();
	this->_replicatedLitFlashlightables = TArray<UFlashlightableComponent*>();
	this->_isOwnerLagging = false;
}
