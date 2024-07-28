#include "StatusEffectSlotData.h"

FStatusEffectSlotData::FStatusEffectSlotData()
{
	this->Id = TEXT("");
	this->IconFilePath = TEXT("");
	this->DisplayName = TEXT("");
	this->Description = TEXT("");
	this->StatusEffectType = EStatusEffectType::None;
	this->Level = 0;
}
