#include "DeadHard.h"

float UDeadHard::GetExhaustedDuration() const
{
	return 0.0f;
}

UDeadHard::UDeadHard()
{
	this->_deadHardCooldownDuration = 1.000000;
	this->_effectsToSpawn = TArray<FStatusEffectSpawnData>();
	this->_exhaustedCooldownPerLevel = 0.000000;
}
