#include "PlayerStatusViewData.h"

FPlayerStatusViewData::FPlayerStatusViewData()
{
	this->PlayerName = TEXT("");
	this->PlayerPortraitIcon = NULL;
	this->PlayerPortraitIconOverride = NULL;
	this->PlayerStatusState = EPlayerStatus::Default;
	this->TimerProgress = 0.0f;
	this->IsDeepWound = false;
	this->IsBroken = false;
	this->IsLocalPlayerAKiller = false;
	this->ObsessionState = EObsessionUIState::Off;
	this->DrainStage = 0;
	this->ConnectionQualityStatus = EConnectionQuality::Good;
	this->KillerStatusData = NULL;
	this->CampProgress = 0.0f;
}
