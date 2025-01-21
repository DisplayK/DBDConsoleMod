#include "CoreStatusEffectWidget.h"

class UCoreStatusEffectIcon;

TMap<FName, UCoreStatusEffectIcon*> UCoreStatusEffectWidget::GetStatusEffectMap() const
{
	return TMap<FName, UCoreStatusEffectIcon*>();
}

UCoreStatusEffectWidget::UCoreStatusEffectWidget()
{
	this->InactiveThreshold = 0;
	this->PrepooledItemAmount = 12;
	this->ItemsByColumn = 0;
	this->EvenColumnOffset = -32.000000;
	this->CoreStatusEffectIconClass = NULL;
	this->StatusEffectContainer = NULL;
	this->_statusEffectPool = TArray<UCoreStatusEffectIcon*>();
	this->_statusEffectOrder = TArray<FName>();
	this->_statusEffectMap = TMap<FName, UCoreStatusEffectIcon*>();
}
