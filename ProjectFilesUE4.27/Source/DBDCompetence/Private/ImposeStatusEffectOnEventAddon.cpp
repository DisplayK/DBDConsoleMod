#include "ImposeStatusEffectOnEventAddon.h"

UImposeStatusEffectOnEventAddon::UImposeStatusEffectOnEventAddon()
{
	this->_statusEffectTime = 0.000000;
	this->_statusEffectNameDeprecated = NAME_None;
	this->_statusEffect = NULL;
	this->_imposeEffectTo = EImposeEffectTo::EventInstigator;
}
