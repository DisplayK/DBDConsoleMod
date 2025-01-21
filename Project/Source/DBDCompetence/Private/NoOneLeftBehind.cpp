#include "NoOneLeftBehind.h"

class UGameplayModifierContainer;

void UNoOneLeftBehind::Authority_OnExitGatePoweredApplicableChanged(UGameplayModifierContainer* container, bool active)
{

}

UNoOneLeftBehind::UNoOneLeftBehind()
{
	this->_movementSpeedPercentage = 1.000000;
	this->_movementSpeedDuration = 10.000000;
	this->_modifyHealOtherSpeedEffect = NULL;
	this->_modifyUnhookOtherSpeedEffect = NULL;
	this->_movementSpeedEffect = NULL;
	this->_actionSpeedModifierValuePerLevel = 0.000000;
	this->_alertKillerRevealEffect = NULL;
}
