#include "PlayerstateDataCache.h"

FPlayerstateDataCache::FPlayerstateDataCache()
{
	this->awardedScoresByType = TMap<FName, FAwardedScores>();
	this->IsDataCacheValid = false;
}
