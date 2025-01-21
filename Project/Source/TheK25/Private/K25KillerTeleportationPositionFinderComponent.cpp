#include "K25KillerTeleportationPositionFinderComponent.h"

UK25KillerTeleportationPositionFinderComponent::UK25KillerTeleportationPositionFinderComponent()
{
	this->_rayCastZOffet = 150.000000;
	this->_rayCastLength = 10000.000000;
	this->_killerInRangeMinimumDistanceCheck = 200.000000;
	this->_killerInRangeMaxRangePercentage = 0.750000;
	this->_deltaHeightThreshold = 20.000000;
	this->_timeBetweenFailsafeChecks = 2.000000;
	this->_teleportLocationStatus = EK25TeleportLocationStatus::Invalid;
	this->_escapeDoors = TArray<AEscapeDoor*>();
}
