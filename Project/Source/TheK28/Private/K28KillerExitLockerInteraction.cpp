#include "K28KillerExitLockerInteraction.h"

UK28KillerExitLockerInteraction::UK28KillerExitLockerInteraction()
{
	this->_cameraBehaviour = EK28ExitLockerCameraBehaviour::None;
	this->_minDotProductFadeOutThreshold = 0.150000;
	this->_rotationMaxTime = 0.500000;
	this->_fadeOutTime = 0.330000;
	this->_fovChangeTime = 0.750000;
	this->_fovChangeTeleportationCurve = NULL;
}
