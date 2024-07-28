#include "SkillCheckViewData.h"

FSkillCheckViewData::FSkillCheckViewData()
{
	this->InputKey = FKey{};
	this->InputKey2 = FKey{};
	this->HitAreaStart = 0.0f;
	this->HitAreaLength = 0.0f;
	this->BonusAreaStart = 0.0f;
	this->BonusAreaLength = 0.0f;
	this->IsHexed = false;
	this->IsSpectating = false;
	this->IsReversed = false;
	this->IsMirrored = false;
	this->IsInsane = false;
	this->IsContinuousSkillCheck = false;
}
