#include "GhostStealthComponent.h"
#include "TimerObject.h"
#include "EGhostStealthState.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class ACharacter;

void UGhostStealthComponent::SetRedStainVisibility(const bool visible)
{

}

void UGhostStealthComponent::OnRep_StealthState(EGhostStealthState previousState)
{

}

void UGhostStealthComponent::Multicast_OnPlayerSpottedKiller_Implementation(ADBDPlayer* spotter)
{

}

void UGhostStealthComponent::Multicast_OnIsBeingSpottedChanged_Implementation(ADBDPlayer* spotter, bool isBeingSpotted, bool onlyUpdateSurvivor)
{

}

void UGhostStealthComponent::Multicast_BroadcastOnSuccessfulAttackInStealth_Implementation(ADBDPlayer* target)
{

}

bool UGhostStealthComponent::IsStealthReadyToActivate() const
{
	return false;
}

bool UGhostStealthComponent::IsStealth() const
{
	return false;
}

EGhostStealthState UGhostStealthComponent::GetStealthState() const
{
	return EGhostStealthState::AWAITING_ACTIVATION;
}

float UGhostStealthComponent::GetStealthChargePercent() const
{
	return 0.0f;
}

void UGhostStealthComponent::DBD_ResetGhostStealth()
{

}

void UGhostStealthComponent::Client_SpawnMarkerOnCharacter_Implementation(ACharacter* revealer)
{

}

void UGhostStealthComponent::Authority_TryActivateStealth()
{

}

void UGhostStealthComponent::Authority_ResetGhostStealth()
{

}

void UGhostStealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGhostStealthComponent, _stealthState);
}

UGhostStealthComponent::UGhostStealthComponent()
{
	this->_stealthState = EGhostStealthState::AWAITING_ACTIVATION;
	this->_cooldownTimer = CreateDefaultSubobject<UTimerObject>(TEXT("StealthCooldownTimer"));
	this->_markers = TMap<ACharacter*, TWeakObjectPtr<AScreenIndicatorWorldMarker>>();
	this->_markerMaxAngleOffset = 0.000000;
	this->_useKillerInstinctWhenSpotted = true;
	this->_sightRevealableComponent = NULL;
	this->_stalkerComponent = NULL;
}
