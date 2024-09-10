#include "StatusEffectProperties.h"

FStatusEffectProperties::FStatusEffectProperties()
{
	this->Tags = TArray<FName>();
	this->StatusEffectBlueprint = NULL;
	this->StatusEffectType = EStatusEffectType::None;
	this->ExternalEffectSource = EExternalEffectSource::None;
}
