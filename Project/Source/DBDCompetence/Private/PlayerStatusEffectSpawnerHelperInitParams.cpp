#include "PlayerStatusEffectSpawnerHelperInitParams.h"

FPlayerStatusEffectSpawnerHelperInitParams::FPlayerStatusEffectSpawnerHelperInitParams()
{
	this->WorldContextObject = NULL;
	this->OriginatingPlayer = NULL;
	this->OriginatingEffect = NULL;
	this->EffectsToSpawn = TArray<FStatusEffectSpawnData>();
}
