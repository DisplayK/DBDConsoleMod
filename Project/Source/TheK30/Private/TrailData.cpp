#include "TrailData.h"

FTrailData::FTrailData()
{
	this->_visualNodes = TArray<ATrailNode*>();
	this->_navigationWaypoints = TArray<FVector>();
	this->_owner = NULL;
	this->_isCompleted = false;
}
