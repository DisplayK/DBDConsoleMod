#include "ManifestationComponent.h"
#include "Net/UnrealNetwork.h"

void UManifestationComponent::OnRep_LingeringUndetectableEndTimeStamp()
{

}

void UManifestationComponent::OnRep_IsManifested()
{

}

void UManifestationComponent::OnLingeringUndetectableTimerCompleted()
{

}

void UManifestationComponent::Multicast_OnManifestationTransitionComplete_Implementation()
{

}

void UManifestationComponent::Multicast_OnManifestationChanged_Implementation(const bool isManifested, const bool isImmediateManifest)
{

}

void UManifestationComponent::Authority_OnMoriStarted()
{

}

void UManifestationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UManifestationComponent, _onryoVisibilityComponent);
	DOREPLIFETIME(UManifestationComponent, _isManifested);
	DOREPLIFETIME(UManifestationComponent, _lingeringUndetectableEndTimeStamp);
}

UManifestationComponent::UManifestationComponent()
{
	this->_onryoVisibilityComponent = NULL;
	this->_onryoVisibilityComponentClass = NULL;
	this->_isManifested = false;
	this->_lingeringUndetectableEndTimeStamp = -1.000000;
}
