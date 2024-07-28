#include "ThemeProperties.h"

FThemeProperties::FThemeProperties()
{
	this->Name = NAME_None;
	this->Weather = NAME_None;
	this->AudioStateThemes = NAME_None;
	this->AudioStateWeather = NAME_None;
	this->AudioThemeEvent = NAME_None;
	this->AudioLimitPointEvent = NAME_None;
	this->AudioThemeSoundBank = NULL;
	this->TilePath = TEXT("");
	this->MapPath = TEXT("");
	this->ThemeNumber = 0;
	this->DisplayName = FText::GetEmpty();
	this->ThemeColorId = EThemeColorId::Invalid;
	this->ThemeSelectionOfferingEffectType = EOfferingEffectType::SlasherPointsAll;
	this->SubstitutionElements = TArray<FGameplayElementSubstitutions>();
	this->DlcIDString = TEXT("");
	this->Blackboard = NULL;
	this->Gesture = false;
}
