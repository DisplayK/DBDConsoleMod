#include "StatusEffectAlertViewData.h"

FStatusEffectAlertViewData::FStatusEffectAlertViewData()
{
	this->StatusEffectName = TEXT("");
	this->StatusEffectIcon = NULL;
	this->StatusEffectType = EStatusEffectType::None;
	this->SourceViewType = EHudStatusEffectAlertViewType::Unhandled;
	this->PerkViewData = FPerkViewData{};
	this->ItemViewData = FItemViewData{};
	this->AddonViewData = FAddonViewData{};
}
