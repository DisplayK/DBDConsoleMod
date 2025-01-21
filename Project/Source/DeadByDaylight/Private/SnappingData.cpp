#include "SnappingData.h"

FSnappingData::FSnappingData()
{
	this->DoSnapPosition = false;
	this->DoSnapRotation = false;
	this->DoSnapRoll = false;
	this->UseZCoord = false;
	this->SweepOnFinalSnap = false;
	this->TargetPosition = FVector{};
	this->TargetRotation = FRotator{};
	this->Duration = 0.0f;
}
