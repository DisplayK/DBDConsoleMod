#include "PowerViewData.h"

FPowerViewData::FPowerViewData()
{
	this->InputKey = FKey{};
	this->IsRechargeable = false;
	this->IsActivated = false;
	this->Count = 0;
	this->ProgressValue = 0.0f;
	this->ShowKeyPrompt = false;
	this->IsCountDisplayForced = false;
	this->IsAvailable = false;
}
