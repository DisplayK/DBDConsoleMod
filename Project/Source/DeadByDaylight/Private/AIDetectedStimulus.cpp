#include "AIDetectedStimulus.h"

FAIDetectedStimulus::FAIDetectedStimulus()
{
	this->Instigator = NULL;
	this->Location = FVector{};
	this->Rotation = FRotator{};
	this->Velocity = FVector{};
	this->AtTime = 0.0f;
}
