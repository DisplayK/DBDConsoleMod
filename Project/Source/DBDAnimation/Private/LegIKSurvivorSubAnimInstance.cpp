#include "LegIKSurvivorSubAnimInstance.h"

ULegIKSurvivorSubAnimInstance::ULegIKSurvivorSubAnimInstance()
{
	this->_isIdle = false;
	this->_isCrouched = false;
	this->AnimCollection = NULL;
	this->_floorJoint = NAME_None;
	this->_pelvisOffsetTreshold = 15.000000;
	this->_pelvisOffsetInterpolationSpeed = 60.000000;
	this->_footOffsetInterpolationSpeed = 60.000000;
	this->_leftFootGroundDetector = NULL;
	this->_rightFootGroundDetector = NULL;
	this->maxLocalHeightForPlanting = 15.000000;
	this->_locomotionPredictor = NULL;
}
