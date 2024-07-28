#include "GameInitAnalytics.h"

FGameInitAnalytics::FGameInitAnalytics()
{
	this->InitGuid = TEXT("");
	this->ProgressionName = TEXT("");
	this->Success = false;
	this->LoadCompleteState = TEXT("");
	this->ElapsedTime = 0.0f;
	this->FailureCount = 0;
	this->AdditionalInfo = TEXT("");
}
