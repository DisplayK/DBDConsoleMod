#include "K28TeleportationStrategyComponent.h"
#include "Net/UnrealNetwork.h"

void UK28TeleportationStrategyComponent::Server_UpdateBestTeleportTarget_Implementation(int32 bestTeleportTargetID)
{

}

void UK28TeleportationStrategyComponent::Multicast_UpdateBestTeleportTarget_Implementation(int32 bestTeleportTargetID)
{

}

void UK28TeleportationStrategyComponent::Authority_OnLevelReadyToPlay()
{

}

void UK28TeleportationStrategyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK28TeleportationStrategyComponent, _lockerClusters);
	DOREPLIFETIME(UK28TeleportationStrategyComponent, _teleportIndicator);
}

UK28TeleportationStrategyComponent::UK28TeleportationStrategyComponent()
{
	this->_lockerClusters = TArray<FK28LockerCluster>();
	this->_minMovementSquaredDistanceForBestClusterRecalculation = 0.000000;
	this->_minDeltaSquaredDistanceForBestTargetRecalculation = 500.000000;
	this->_minDeltaDotProductForBestTargetRecalculation = 0.980000;
	this->_minDotProductToBeEligibleForBestCluster = 0.970000;
	this->_lockerComponentClass = NULL;
	this->_teleportIndicatorClass = NULL;
	this->_teleportIndicator = NULL;
}
