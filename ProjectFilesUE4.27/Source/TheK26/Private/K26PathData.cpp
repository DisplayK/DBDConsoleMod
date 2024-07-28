#include "K26PathData.h"

FK26PathData::FK26PathData()
{
	this->IsInUse = false;
	this->IsVisibleToKiller = false;
	this->IsVisibleForSurvivors = false;
	this->MaxVisibleIndex = 0;
	this->PathPartLocations = TArray<FVector>();
	this->PathPartRotations = TArray<FRotator>();
	this->PathEndLocation = FVector{};
	this->PathEndRotation = FRotator{};
}
