#include "K25SurvivorChainTargetterComponent.h"
#include "UObject/NoExportTypes.h"
#include "ECamperDamageState.h"

void UK25SurvivorChainTargetterComponent::Multicast_DebugPositionFind_Implementation(const FVector& startSweepPosition, const FVector& endSweepPosition, bool hasFoundPosition, const FVector& foundPosition, bool hasFoundCollision, const FVector& collisionPosition) const
{

}

void UK25SurvivorChainTargetterComponent::Authority_OnSurvivorHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

UK25SurvivorChainTargetterComponent::UK25SurvivorChainTargetterComponent()
{
	this->_timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt = 0.100000;
	this->_sphereCastRadius = 20.000000;
	this->_numberOfPositionFindingTries = 5;
	this->_maxNumberOfChainRetries = 3;
}
