#include "K28LockerCluster.h"

FK28LockerCluster::FK28LockerCluster()
{
	this->_lockersInCluster = TArray<UK28LockerComponent*>();
	this->_centerLocation = FVector{};
	this->_teleportIndicatorLocation = FVector{};
}
