#include "MoriableComponent.h"
#include "Net/UnrealNetwork.h"

void UMoriableComponent::OnRep_MoriInteractions()
{

}

void UMoriableComponent::OnMoriUpdateStart()
{

}

void UMoriableComponent::OnMoriFinished(bool hasBeenKilledByMori)
{

}

void UMoriableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UMoriableComponent, _moriInteractions);
}

UMoriableComponent::UMoriableComponent()
{
	this->_moriInteractions = TArray<UInteractionDefinition*>();
}
