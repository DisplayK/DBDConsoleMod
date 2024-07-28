#include "DialogClipSettings.h"

FDialogClipSettings::FDialogClipSettings()
{
	this->Clip = NULL;
	this->ConditionClass = NULL;
	this->Condition = NULL;
	this->Priority = 0;
	this->Weight = 0;
	this->IsOnlyPlayingOnce = false;
}
