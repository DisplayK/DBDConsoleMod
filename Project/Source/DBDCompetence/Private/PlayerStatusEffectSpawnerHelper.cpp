#include "PlayerStatusEffectSpawnerHelper.h"

FPlayerStatusEffectSpawnerHelper::FPlayerStatusEffectSpawnerHelper()
{
	this->_initParams = FPlayerStatusEffectSpawnerHelperInitParams{};
	this->_spawnedEffects = TSet<UStatusEffect*>();
}
