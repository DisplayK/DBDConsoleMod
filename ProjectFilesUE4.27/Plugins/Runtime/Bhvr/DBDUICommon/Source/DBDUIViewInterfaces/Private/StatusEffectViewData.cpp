#include "StatusEffectViewData.h"

FStatusEffectViewData::FStatusEffectViewData()
{
	this->Id = NAME_None;
	this->IconTexture = NULL;
	this->StatusEffectType = EStatusEffectType::None;
	this->Level = 0;
	this->Percentage = 0.0f;
	this->PlayIntroAnimation = false;
}
