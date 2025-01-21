#include "ChainHuntStateData.h"

FChainHuntStateData::FChainHuntStateData()
{
	this->StartTime = FDateTime{};
	this->ChainHuntState = EChainHuntState::Inactive;
}
