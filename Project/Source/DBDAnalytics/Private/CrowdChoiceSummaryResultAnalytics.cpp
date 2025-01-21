#include "CrowdChoiceSummaryResultAnalytics.h"

FCrowdChoiceSummaryResultAnalytics::FCrowdChoiceSummaryResultAnalytics()
{
	this->PollId = TEXT("");
	this->PollType = TEXT("");
	this->Status = TEXT("");
	this->PollDuration = 0.0f;
	this->VoteTimestamps = TArray<float>();
	this->NewVotesPerTimestampInterval = TArray<int32>();
}
