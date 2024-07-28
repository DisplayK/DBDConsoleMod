#include "ZombieResurrector.h"

void UZombieResurrector::Authority_OnKillerPowerLevelChanged(int32 powerLevel)
{

}

UZombieResurrector::UZombieResurrector()
{
	this->_delayedSpawnZombies = TArray<AZombieCharacter*>();
}
