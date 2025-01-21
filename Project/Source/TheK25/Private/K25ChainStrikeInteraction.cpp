#include "K25ChainStrikeInteraction.h"
#include "EChainStrikeEndReason.h"
#include "EChainStrikeCameraViewTarget.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"

void UK25ChainStrikeInteraction::Server_SetShouldIncrementChargeableComponent_Implementation(bool shouldIncrement)
{

}

void UK25ChainStrikeInteraction::Server_SetFallbackEndReason_Implementation(EChainStrikeEndReason chainStrikeEndReason)
{

}

void UK25ChainStrikeInteraction::Server_SetCameraViewTarget_Implementation(EChainStrikeCameraViewTarget newViewTarget)
{

}

void UK25ChainStrikeInteraction::Server_RemoveStateTagFromPlayer_Implementation(FGameplayTag tag)
{

}

void UK25ChainStrikeInteraction::Server_AddStateTagToPlayer_Implementation(FGameplayTag tag)
{

}

void UK25ChainStrikeInteraction::OnRep_ChainStrikeCameraViewTarget()
{

}

void UK25ChainStrikeInteraction::Multicast_SetFallbackEndReason_Implementation(EChainStrikeEndReason chainStrikeEndReason)
{

}

void UK25ChainStrikeInteraction::Multicast_RemoveStateTagFromPlayer_Implementation(FGameplayTag tag)
{

}

void UK25ChainStrikeInteraction::Multicast_AddStateTagToPlayer_Implementation(FGameplayTag tag)
{

}

void UK25ChainStrikeInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK25ChainStrikeInteraction, _chainStrikeCameraViewTarget);
	DOREPLIFETIME(UK25ChainStrikeInteraction, _hasHitSurvivor);
}

UK25ChainStrikeInteraction::UK25ChainStrikeInteraction()
{
	this->_chainStrikeStateMachineclass = NULL;
	this->_repossessFadeOutTime = 0.500000;
	this->_gatewayPossessionFovModifierCurve = NULL;
	this->_controlledProjectilePossessionFovModifierCurve = NULL;
	this->_stateMachine = NULL;
	this->_authority_shouldIncrementChargeableComponent = false;
	this->_chainStrikeCameraViewTarget = EChainStrikeCameraViewTarget::Killer;
	this->_hasHitSurvivor = false;
}
