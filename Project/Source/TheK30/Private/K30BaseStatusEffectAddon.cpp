#include "K30BaseStatusEffectAddon.h"

UK30BaseStatusEffectAddon::UK30BaseStatusEffectAddon()
{
	this->_baseStatusEffectClasses = TArray<TSubclassOf<UStatusEffect>>();
	this->_lifetime = 0.000000;
	this->_customParam = 0.000000;
	this->_shouldDisplay = true;
}
