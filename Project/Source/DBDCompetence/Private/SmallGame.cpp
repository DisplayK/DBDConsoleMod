#include "SmallGame.h"

void USmallGame::Multicast_TotemFound_Implementation()
{

}

float USmallGame::GetDetectionConeAngle() const
{
	return 0.0f;
}

void USmallGame::Authority_SetTotemDetected(bool value)
{

}

USmallGame::USmallGame()
{
	this->_detectionConeAngle = 0.000000;
	this->_detectionConeAngleReductionRate = 0.000000;
	this->_totemDetected = false;
}
