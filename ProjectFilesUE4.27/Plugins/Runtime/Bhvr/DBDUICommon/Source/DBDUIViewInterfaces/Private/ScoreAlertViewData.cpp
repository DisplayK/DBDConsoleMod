#include "ScoreAlertViewData.h"

FScoreAlertViewData::FScoreAlertViewData()
{
	this->ScoreType = EDBDScoreCategory::DBD_CamperScoreCat_Objectives;
	this->Title = TEXT("");
	this->ScoreValue = 0;
	this->Progress = 0.0f;
}
