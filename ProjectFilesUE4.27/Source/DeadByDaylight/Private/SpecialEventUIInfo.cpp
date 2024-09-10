#include "SpecialEventUIInfo.h"

FSpecialEventUIInfo::FSpecialEventUIInfo()
{
	this->EventId = TEXT("");
	this->EventBannerFrameLabel = TEXT("");
	this->EventThemeFrameLabel = TEXT("");
	this->EventName = FText::GetEmpty();
	this->IsPastEvent = false;
	this->BloodwebCollectSoundEvent = TEXT("");
}
