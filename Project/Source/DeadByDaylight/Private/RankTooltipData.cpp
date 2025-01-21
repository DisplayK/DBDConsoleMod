#include "RankTooltipData.h"

FRankTooltipData::FRankTooltipData()
{
	this->CurrentPlayerRole = EPlayerRole::VE_None;
	this->SurvivorRankData = FPlayerRoleRankData{};
	this->KillerRankData = FPlayerRoleRankData{};
}
