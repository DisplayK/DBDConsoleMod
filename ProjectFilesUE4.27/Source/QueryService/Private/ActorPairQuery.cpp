#include "ActorPairQuery.h"

FActorPairQuery::FActorPairQuery()
{
	this->_distanceTrackerCases = TMap<uint32, FDistanceTrackerCase>();
	this->_caseIndex = 0;
	this->_usePlanarDistance = false;
	this->_isHeightRangeLimited = false;
}
