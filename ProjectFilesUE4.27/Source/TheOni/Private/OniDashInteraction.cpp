#include "OniDashInteraction.h"

class ADBDPlayer;

void UOniDashInteraction::SetPlayerOwner(const ADBDPlayer* player)
{

}

void UOniDashInteraction::OnLevelReadyToPlay()
{

}

UOniDashInteraction::UOniDashInteraction()
{
	this->_chargingSpeedCurve = NULL;
	this->_dashingSpeedCurve = NULL;
	this->_yawAdjustTime = 0.200000;
	this->_cooldownSpeedCurve = NULL;
}
