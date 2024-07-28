#include "GameStatePressureZoneLevelMapContainer.h"

FGameStatePressureZoneLevelMapContainer::FGameStatePressureZoneLevelMapContainer()
{
	this->Map = TMap<EAIGameState, EAIPressureZoneLevel>();
}
