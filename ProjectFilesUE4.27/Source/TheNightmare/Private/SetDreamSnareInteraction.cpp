#include "SetDreamSnareInteraction.h"

bool USetDreamSnareInteraction::HasCancelledDreamSnare() const
{
	return false;
}

float USetDreamSnareInteraction::GetTrapDistanceFromControlRotation() const
{
	return 0.0f;
}

USetDreamSnareInteraction::USetDreamSnareInteraction()
{
	this->MinPitch = 70.000000;
	this->MinPlacementDistance = 50.000000;
	this->MaxPlacementDistance = 450.000000;
}
