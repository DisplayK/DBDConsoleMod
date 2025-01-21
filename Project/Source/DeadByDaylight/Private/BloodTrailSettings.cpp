#include "BloodTrailSettings.h"

UBloodTrailSettings::UBloodTrailSettings()
{
	this->_initialDelay = 0.100000;
	this->_numBloodDropsPerBloodPool = 2;
	this->_bloodDropsInterval = 0.200000;
	this->_randomlyRotateBloodDrops = true;
	this->_bloodDropsRandomScatter = 30.000000;
	this->_bloodTraceChannel = TraceTypeQuery5;
	this->_bloodDecalEffect = NULL;
	this->_recycleThresholdPercentage = 0.960000;
	this->_recycleDistancePercentage = 0.250000;
}
