#include "LookAtKillerSubAnimInstance.h"

void ULookAtKillerSubAnimInstance::ResetNeutralIdleRotationYaw()
{

}

ULookAtKillerSubAnimInstance::ULookAtKillerSubAnimInstance()
{
	this->_owningPawn = NULL;
	this->_owningKiller = NULL;
	this->_enableDynamics = false;
	this->_dynamicsAlpha = 0.500000;
	this->_shouldApplyDynamics = false;
	this->_playerMaxSpeed = 460.000000;
	this->_animYaw = 0.000000;
	this->_enableTurnInPlace = false;
	this->_shouldTurnLeft = false;
	this->_shouldTurnRight = false;
	this->_turnInPlaceThresholdAngle = 45.000000;
	this->_idleNeutralRotationYaw = 0.000000;
	this->_isIdle = false;
}
