#include "DistanceTrackerCase.h"

FDistanceTrackerCase::FDistanceTrackerCase()
{
	this->_distanceToTrackSquared = 0.0f;
	this->_heightRange = FActorPairQueryHeightRange{};
	this->_inRange = false;
}
