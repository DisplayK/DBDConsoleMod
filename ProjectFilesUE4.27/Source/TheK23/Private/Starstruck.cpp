#include "Starstruck.h"

UStarstruck::UStarstruck()
{
	this->_exposedEffectDuration = 0.000000;
	this->_perkCooldownDuration = 0.000000;
	this->_camperExposedEffects = TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>>();
}
