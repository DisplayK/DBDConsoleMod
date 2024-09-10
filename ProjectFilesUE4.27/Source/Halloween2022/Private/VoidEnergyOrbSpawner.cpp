#include "VoidEnergyOrbSpawner.h"
#include "GameplayTagContainer.h"
#include "OrbProperties.h"
#include "EVoidEnergyType.h"
#include "GameEventData.h"

void UVoidEnergyOrbSpawner::Multicast_SpawnVoidEnergyOrb_Implementation(const FOrbProperties& orbProperties, const bool isLargeOrb)
{

}

void UVoidEnergyOrbSpawner::Authority_TimerSpawnVoidEnergyOrb(const FOrbProperties orbProperties, const bool isLargeOrb)
{

}

void UVoidEnergyOrbSpawner::Authority_SurvivorStunOnKiller(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UVoidEnergyOrbSpawner::Authority_SurvivorStunKillerWithPallet(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UVoidEnergyOrbSpawner::Authority_SurvivorStunKillerWithHeadOn(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UVoidEnergyOrbSpawner::Authority_SurvivorStunKillerWithFlashLight(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UVoidEnergyOrbSpawner::Authority_SpawnVoidEnergyOrbs(const FOrbProperties& orbProperties, const int32 numberOfOrbsToSpawn, const int32 numberOfOrbsThatCanBeAbsorbed)
{

}

void UVoidEnergyOrbSpawner::Authority_KillerDownSurvivor(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UVoidEnergyOrbSpawner::Authority_GiveVoidEnergyToPlayer(const EVoidEnergyType voidEnergyType, const int32 voidEnergyToAdd)
{

}

UVoidEnergyOrbSpawner::UVoidEnergyOrbSpawner()
{
	this->_downedSurviorSpawnOffsetHeight = 150.000000;
	this->_palletSpawnHeightOfOrbs = 150.000000;
	this->_lockerSpawnForwardOffset = 150.000000;
	this->_lockerSpawnUpwardOffset = 150.000000;
	this->_slasherSpawnOffset = 150.000000;
	this->_slasherSpawnOffsetFarDown = 150.000000;
	this->_voidEnergyOrbClass = NULL;
}
