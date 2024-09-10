#include "AddonViewData.h"

FAddonViewData::FAddonViewData()
{
	this->Cooldown = 0.0f;
	this->StatusEffectType = EStatusEffectType::None;
	this->StackCount = 0;
	this->LoadoutPartState = ELoadoutPartState::None;
}
