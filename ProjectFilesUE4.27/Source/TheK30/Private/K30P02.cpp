#include "K30P02.h"
#include "ETotemState.h"

class ADBDPlayer;

float UK30P02::GetScreamInterval() const
{
	return 0.0f;
}

void UK30P02::Authority_UncursePlayer()
{

}

void UK30P02::Authority_OnTotemStateChanged(const ETotemState oldState, const ETotemState newState)
{

}

void UK30P02::Authority_OnSurvivorFirstScream(ADBDPlayer* player)
{

}

UK30P02::UK30P02()
{
	this->_cursedPlayer = NULL;
	this->_activeStatusEffects = TArray<UStatusEffect*>();
	this->_screamEffectClass = NULL;
	this->_screamLoudNoiseDuration = -1.000000;
	this->_screamRevealAuraToKillerEffectClass = NULL;
	this->_screamRevealAuraToKillerDuration = -1.000000;
	this->_screamInterval = 0.000000;
}
