#include "BlinkTargetFinder.h"

UBlinkTargetFinder::UBlinkTargetFinder()
{
	this->_floorRaycastStartZOffset = 150.000000;
	this->_floorRaycastLength = 1000.000000;
	this->_locationClearStepHeight = 20.000000;
	this->_horizontalSamplePercentages = TArray<float>();
	this->_blinkBlockerSphereCastRadius = 5.000000;
}
