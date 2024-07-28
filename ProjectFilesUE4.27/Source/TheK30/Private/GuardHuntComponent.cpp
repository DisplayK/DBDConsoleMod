#include "GuardHuntComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class ACamperPlayer;

void UGuardHuntComponent::OnRep_HuntStartingLocation()
{

}

void UGuardHuntComponent::OnRep_HuntedSurvivor(ACamperPlayer* previousChasedSurvivor)
{

}

ACamperPlayer* UGuardHuntComponent::GetHuntedSurvivor() const
{
	return NULL;
}

void UGuardHuntComponent::Authority_OnCamperUnhooked(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UGuardHuntComponent::Authority_OnCamperInjuredOrDowned(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UGuardHuntComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGuardHuntComponent, _huntTimeLeft);
	DOREPLIFETIME(UGuardHuntComponent, _huntedSurvivor);
	DOREPLIFETIME(UGuardHuntComponent, _huntStartingLocation);
}

UGuardHuntComponent::UGuardHuntComponent()
{
	this->_maxPathingDetourLength = 100.000000;
	this->_distanceBeforeGoingToNextWaypoint = 100.000000;
	this->_distanceBeforeGoingToNextWaypointOffNavmesh = 10.000000;
	this->_distanceFromLockerToClearWaypoints = 200.000000;
	this->_underWaypointZDistance = 30.000000;
	this->_huntedSurvivor = NULL;
	this->_speedConsideredStuck = 50.000000;
	this->_timeStuckToResetPathing = 0.250000;
}
