#include "MatchmakingSearchCompleteAnalytics.h"

FMatchmakingSearchCompleteAnalytics::FMatchmakingSearchCompleteAnalytics()
{
	this->Success = false;
	this->NumMatches = 0;
	this->UsedFallback = false;
	this->ConnectingToUser = TEXT("");
	this->SearchParams = TEXT("");
	this->SearchResultSettings = TEXT("");
}
