#include "RankGlobalData.h"

FRankGlobalData::FRankGlobalData()
{
	this->NoPipLossRankThreshold = 0;
	this->NoRankLossThreshold = 0;
	this->BaseTrialPips = 0;
	this->MaxPips = 0;
	this->RankResetDates = TArray<FRankResetDateData>();
}
