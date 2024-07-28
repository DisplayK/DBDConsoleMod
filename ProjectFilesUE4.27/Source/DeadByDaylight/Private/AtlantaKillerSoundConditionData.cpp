#include "AtlantaKillerSoundConditionData.h"

FAtlantaKillerSoundConditionData::FAtlantaKillerSoundConditionData()
{
	this->RTPCAudioID = NAME_None;
	this->ComparisonValue = 0.0f;
	this->ValueComparisonType = EKillerSoundComparisonType::Equal;
}
