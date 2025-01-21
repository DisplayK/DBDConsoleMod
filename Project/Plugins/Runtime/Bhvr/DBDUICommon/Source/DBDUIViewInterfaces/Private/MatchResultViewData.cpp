#include "MatchResultViewData.h"

FMatchResultViewData::FMatchResultViewData()
{
	this->IsSlasher = false;
	this->SurvivorResult = EGameState::VE_Active;
	this->KillerResult = EKillerMatchResult::EntityDispleased;
	this->Duration = 0.0f;
}
