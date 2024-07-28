#include "ActivePhaseWalkInteraction.h"

class ADBDPlayer;

void UActivePhaseWalkInteraction::OnPowerCollected(ADBDPlayer* collector)
{

}

void UActivePhaseWalkInteraction::OnPlayerLocallyObservedChanged(ADBDPlayer* player)
{

}

float UActivePhaseWalkInteraction::GetChargeTime() const
{
	return 0.0f;
}

UActivePhaseWalkInteraction::UActivePhaseWalkInteraction()
{
	this->_accelerationMultiplier = 0.000000;
	this->_chargingSpeedCurve = NULL;
	this->_activePhaseWalkChargingMontage = NULL;
}
