#include "LocomotionLookAtSurvivorSubAnimInstance.h"

ULocomotionLookAtSurvivorSubAnimInstance::ULocomotionLookAtSurvivorSubAnimInstance()
{
	this->_isHealthy = false;
	this->_isUsingAimItem = false;
	this->_aimOffsetPitch = 0.000000;
	this->_aimOffsetYaw = 0.000000;
	this->_aimOffsetYawInterpolated = 0.000000;
	this->_allowLookAt = false;
	this->_isDrasticAimOffsetYawChangeDetected = false;
	this->_aimOffsetYawInterpolationSpeed = 1000.000000;
	this->_aimOffsetYawDeadzoneStart = 173.000000;
	this->_aimOffsetYawClampValue = 172.000000;
	this->_aimOffsetYawDrasticChangeUpperLimit = 100.000000;
	this->_aimOffsetYawDrasticChangeLowerLimit = 10.000000;
	this->_aimOffsetYawDrasticChangeInterpolationSpeed = 2200.000000;
	this->_aimOffsetYawInterpolateEaseIn = NULL;
	this->_aimOffsetYawInterpolateEaseOut = NULL;
	this->_aimOffsetYawInterpolationEaseInLength = 0.500000;
	this->_aimOffsetYawInterpolationEaseOutDistance = 10.000000;
	this->_isAimOffsetYawInDeadZone = false;
	this->_alphaAimOffsetPitchDown = 0.000000;
	this->_alphaAimOffsetPitchCenter = 0.000000;
	this->_alphaAimOffsetPitchUp = 0.000000;
}
