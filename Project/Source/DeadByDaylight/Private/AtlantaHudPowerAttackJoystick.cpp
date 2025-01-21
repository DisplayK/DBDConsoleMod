#include "AtlantaHudPowerAttackJoystick.h"

void UAtlantaHudPowerAttackJoystick::OnFinishedTutorialAnimationIn()
{

}

void UAtlantaHudPowerAttackJoystick::OnFinishedAvailableAnimation()
{

}

UAtlantaHudPowerAttackJoystick::UAtlantaHudPowerAttackJoystick()
{
	this->AnimationContainer = NULL;
	this->_availableAnimationName = NAME_None;
	this->_fadeOutAnimationName = NAME_None;
	this->_tutoStartAnimationName = NAME_None;
	this->_tutoLoopAnimationName = NAME_None;
	this->Icon = NULL;
}
