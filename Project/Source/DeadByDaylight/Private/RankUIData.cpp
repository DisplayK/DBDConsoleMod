#include "RankUIData.h"

FRankUIData::FRankUIData()
{
	this->Rank = 0;
	this->PlayerRole = EPlayerRole::VE_None;
	this->Color = FSlateColor{};
	this->Frame = NULL;
}
