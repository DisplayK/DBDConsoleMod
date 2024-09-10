#include "OnryoTVInitialCooldownStateComponent.h"
#include "Net/UnrealNetwork.h"

void UOnryoTVInitialCooldownStateComponent::OnRep_IsDone()
{

}

void UOnryoTVInitialCooldownStateComponent::Authority_TryStartCooldown()
{

}

void UOnryoTVInitialCooldownStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UOnryoTVInitialCooldownStateComponent, _cooldownTimer);
	DOREPLIFETIME(UOnryoTVInitialCooldownStateComponent, _isDone);
}

UOnryoTVInitialCooldownStateComponent::UOnryoTVInitialCooldownStateComponent()
{
	this->_cooldownTimer = NULL;
	this->_isDone = false;
}
