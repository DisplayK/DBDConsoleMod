#include "ScoreValue.h"

FScoreValue::FScoreValue()
{
	this->ID = NAME_None;
	this->Category = EDBDScoreCategory::DBD_CamperScoreCat_Objectives;
	this->BloodpointValue = 0;
	this->MaxBloodpointValue = 0;
	this->BloodpointDepreciationCurve = NULL;
	this->OngoingWaitTime = 0.0f;
	this->DisplayName = FText::GetEmpty();
}
