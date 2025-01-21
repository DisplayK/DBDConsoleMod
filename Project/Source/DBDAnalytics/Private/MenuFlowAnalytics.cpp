#include "MenuFlowAnalytics.h"

FMenuFlowAnalytics::FMenuFlowAnalytics()
{
	this->CurrentContext = TEXT("");
	this->PreviousContext = TEXT("");
	this->TimeOnPreviousContext = 0.0f;
	this->ContextChangeTimetamp = TEXT("");
	this->MatchId = TEXT("");
	this->LobbyId = TEXT("");
	this->Tabs = TArray<FMenuFlowTabData>();
	this->Buttons = TArray<FMenuFlowButtonPressData>();
}
