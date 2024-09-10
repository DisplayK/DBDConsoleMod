#include "BlinkIndicatorController.h"

UBlinkIndicatorController::UBlinkIndicatorController()
{
	this->_indicatorClass = NULL;
	this->_indicatorMinimumVelocity = 460.000000;
	this->_indicatorVelocityEasingFactor = 0.050000;
	this->_indicator = NULL;
}
