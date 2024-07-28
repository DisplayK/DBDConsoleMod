#include "EmblemProgressionAnalytics.h"

FEmblemProgressionAnalytics::FEmblemProgressionAnalytics()
{
	this->MatchId = TEXT("");
	this->EmblemId = TEXT("");
	this->EmblemValue = 0.0f;
	this->EmblemQuality = TEXT("");
	this->ProgressionDetails = TArray<FEmblemProgressionDetailsAnalytics>();
}
