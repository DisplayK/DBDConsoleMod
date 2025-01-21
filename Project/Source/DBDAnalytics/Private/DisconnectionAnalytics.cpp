#include "DisconnectionAnalytics.h"

FDisconnectionAnalytics::FDisconnectionAnalytics()
{
	this->TimeSinceLastPacket = 0.0f;
	this->GameFlowStep = TEXT("");
	this->UnrealMapName = TEXT("");
	this->MapName = TEXT("");
	this->ThemeName = TEXT("");
	this->FailureType = TEXT("");
	this->ErrorString = TEXT("");
	this->MatchId = TEXT("");
}
