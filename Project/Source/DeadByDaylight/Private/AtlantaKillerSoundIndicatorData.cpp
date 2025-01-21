#include "AtlantaKillerSoundIndicatorData.h"

FAtlantaKillerSoundIndicatorData::FAtlantaKillerSoundIndicatorData()
{
	this->MinRadiusSoundDistance = 0.0f;
	this->MaxRadiusSoundDistance = 0.0f;
	this->MinRangeSoundHeard = 0.0f;
	this->CanBeGlobalSound = false;
	this->CanDiminishWithDistance = false;
	this->GlobalSoundConditions = TArray<FAtlantaKillerSoundConditionData>();
	this->DiminishWithDistanceConditions = TArray<FAtlantaKillerSoundConditionData>();
}
