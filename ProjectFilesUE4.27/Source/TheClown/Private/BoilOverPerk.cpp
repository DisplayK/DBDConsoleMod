#include "BoilOverPerk.h"

class ADBDPlayer;

void UBoilOverPerk::Authority_OnWiggleEnd()
{

}

void UBoilOverPerk::Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker)
{

}

UBoilOverPerk::UBoilOverPerk()
{
	this->_effectsToSpawn = TArray<FStatusEffectSpawnData>();
	this->_additionnalWigglingProgressWhenFalling = 0.000000;
	this->_greatHeightsValue = 100.000000;
}
