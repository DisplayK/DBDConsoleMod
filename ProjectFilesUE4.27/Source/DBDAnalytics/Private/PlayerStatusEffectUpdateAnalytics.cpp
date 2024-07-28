#include "PlayerStatusEffectUpdateAnalytics.h"

FPlayerStatusEffectUpdateAnalytics::FPlayerStatusEffectUpdateAnalytics()
{
	this->MatchId = TEXT("");
	this->ElapsedMatchTime = 0;
	this->NbOfConcurrentStatusEffects = 0;
	this->StatusEffects = TArray<FString>();
}
