#include "S30P02.h"

float US30P02::GetHealingOthersBonus() const
{
	return 0.0f;
}

US30P02::US30P02()
{
	this->_auraReadingDistance = 0.000000;
	this->_healingOthersBonus = 0.000000;
	this->_revealAuraStatusEffectToImpose = NULL;
	this->_showHUDIconStatusEffectToImpose = NULL;
	this->_imposedShowHUDIconStatusEffects = TArray<UStatusEffect*>();
}
