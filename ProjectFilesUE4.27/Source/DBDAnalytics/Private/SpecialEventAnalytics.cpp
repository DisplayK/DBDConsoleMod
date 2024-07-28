#include "SpecialEventAnalytics.h"

FSpecialEventAnalytics::FSpecialEventAnalytics()
{
	this->Role = EPlayerRole::VE_None;
	this->MatchId = TEXT("");
	this->EventName = NAME_None;
	this->Challenge = NAME_None;
	this->Amount = 0;
	this->CummulativeAmount = 0;
}
