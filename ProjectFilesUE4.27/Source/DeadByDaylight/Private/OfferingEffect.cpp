#include "OfferingEffect.h"

FOfferingEffect::FOfferingEffect()
{
	this->Type = EOfferingEffectType::SlasherPointsAll;
	this->Tags = TArray<FName>();
	this->Value = NAME_None;
	this->Modifier = 0.0f;
}
