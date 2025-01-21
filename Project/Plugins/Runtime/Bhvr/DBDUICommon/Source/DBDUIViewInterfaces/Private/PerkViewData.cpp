#include "PerkViewData.h"

FPerkViewData::FPerkViewData()
{
	this->Level = 0;
	this->Cooldown = 0.0f;
	this->StatusEffectType = EStatusEffectType::None;
	this->StackCount = 0;
	this->IsRechargeable = false;
	this->IsRechargeableActive = false;
}
