#include "UserGameStats.h"

FUserGameStats::FUserGameStats()
{
	this->Disconnected = false;
	this->FearTokens = 0;
	this->Skulls = 0;
	this->BonusBloodpoints = TMap<EDBDScoreCategory, int32>();
	this->_bloodpoints = TMap<EDBDScoreCategory, int32>();
}
