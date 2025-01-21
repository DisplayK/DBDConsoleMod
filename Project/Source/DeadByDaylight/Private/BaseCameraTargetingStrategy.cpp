#include "BaseCameraTargetingStrategy.h"

UBaseCameraTargetingStrategy::UBaseCameraTargetingStrategy()
{
	this->_maxFreeAngle = 45.000000;
	this->_maxInputRotation = 35.000000;
	this->_interpolationSpeed = 2.000000;
	this->_interpolationSpeedOutsideFreeMoveZone = 2.000000;
	this->_target = NULL;
}
