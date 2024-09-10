#include "EmblemSlotData.h"

FEmblemSlotData::FEmblemSlotData()
{
	this->Quality = EEmblemQuality::None;
	this->Title = TEXT("");
	this->Description = TEXT("");
	this->Score = 0;
	this->IconPaths = TArray<FString>();
	this->ThresholdPoints = TArray<int32>();
	this->CurrentPoints = 0.0f;
	this->ProgressionData = TArray<FEmblemProgressionData>();
	this->CharacterExperience = 0;
}
