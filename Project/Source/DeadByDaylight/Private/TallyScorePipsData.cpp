#include "TallyScorePipsData.h"

FTallyScorePipsData::FTallyScorePipsData()
{
	this->Threshold = 0.0f;
	this->PipThresholds = TArray<float>();
	this->Scores = TArray<FEmblemSlotData>();
	this->PipsDelta = 0;
	this->IsSlasher = false;
	this->IsCustomMatch = false;
}
