#include "FrameHikeAnalytics.h"

FFrameHikeAnalytics::FFrameHikeAnalytics()
{
	this->FrameDeltaTime = 0.0f;
	this->TimeSinceApplicationStarted = 0.0f;
	this->CurrentTimeoutThreshold = 0.0f;
	this->IsOverConnectionTimeLimit = false;
	this->CurrentMap = TEXT("");
	this->CurrentGameMap = TEXT("");
	this->GameFlowStep = TEXT("");
	this->CurrentGameFlowContext = TEXT("");
	this->PreviousGameFlowContext = TEXT("");
	this->NavigationContext = TEXT("");
	this->PreviousNavigationContext = TEXT("");
	this->RecentLogs = TEXT("");
	this->KrakenMatchId = TEXT("");
	this->FlushAsyncLoadingTime = 0.0f;
	this->FlushAsyncLoadingCount = 0;
	this->SyncLoadCount = 0;
	this->GameType = TEXT("");
	this->NetMode = TEXT("");
}
