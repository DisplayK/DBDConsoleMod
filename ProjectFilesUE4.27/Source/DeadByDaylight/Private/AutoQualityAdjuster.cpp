#include "AutoQualityAdjuster.h"

AAutoQualityAdjuster::AAutoQualityAdjuster()
{
	this->TargetResolutionScale = 100.000000;
	this->MinimumMS = 30.000000;
	this->MaximumMS = 35.000000;
	this->ScaleIncreaseRate = 0.010000;
	this->ScaleDecreaseRate = 0.500000;
	this->MinimumAllowableScale = 50.000000;
}
