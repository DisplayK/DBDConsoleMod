#include "DBDAttackTargetTracker.h"

FDBDAttackTargetTracker::FDBDAttackTargetTracker()
{
	this->_useTargetTracking = false;
	this->_targetSnapDistance = FStatProperty{};
	this->_ownerEyeSocketName = NAME_None;
	this->_targetBoneName = NAME_None;
	this->_trackedTarget = NULL;
	this->_owningPlayer = NULL;
}
