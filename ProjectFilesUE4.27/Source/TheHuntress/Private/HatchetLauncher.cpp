#include "HatchetLauncher.h"

bool UHatchetLauncher::IsLaunchedHatchetFullyCharged() const
{
	return false;
}

UHatchetLauncher::UHatchetLauncher()
{
	this->_angleOffsetCurve = NULL;
	this->_speedCurve = NULL;
	this->_hatchetSpeedWhenThrowFullyCharged = 6000.000000;
	this->_hatchetPitchCurve = NULL;
}
