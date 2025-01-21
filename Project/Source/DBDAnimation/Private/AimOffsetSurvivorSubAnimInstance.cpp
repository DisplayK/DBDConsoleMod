#include "AimOffsetSurvivorSubAnimInstance.h"

UAimOffsetSurvivorSubAnimInstance::UAimOffsetSurvivorSubAnimInstance()
{
	this->_pitch = 0.000000;
	this->_yaw = 0.000000;
	this->_yawInterpolated = 0.000000;
	this->_allowLookAt = false;
	this->_isUsingAimItem = false;
	this->_isInjured = false;
	this->_isCrawling = false;
	this->_isIdle = false;
	this->_isDrasticYawChangeDetected = false;
	this->_yawInterpolationSpeed = 2.500000;
	this->_yawDeadzoneStart = 150.000000;
	this->_yawClampValue = 135.000000;
	this->_yawDrasticChangeUpperLimit = 100.000000;
	this->_yawDrasticChangeLowerLimit = 10.000000;
	this->_yawDrasticChangeInterpolationSpeed = 4.000000;
	this->_yawInterpolateEaseIn = NULL;
	this->_yawInterpolateEaseOut = NULL;
	this->_yawInterpolationEaseInLength = 0.500000;
	this->_yawInterpolationEaseOutDistance = 10.000000;
	this->_isYawInDeadZone = false;
	this->_currentTargetYaw = 0.000000;
	this->_yawAcceleration = 0.000000;
	this->_yawAccelerationTime = 0.000000;
}
