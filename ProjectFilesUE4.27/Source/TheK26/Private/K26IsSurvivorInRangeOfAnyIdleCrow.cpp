#include "K26IsSurvivorInRangeOfAnyIdleCrow.h"

class ACamperPlayer;
class AK26CrowProjectile;
class UAuthoritativeActorPoolComponent;
class AActor;

void UK26IsSurvivorInRangeOfAnyIdleCrow::Multicast_SetIsTrue_Implementation(const bool isTrue)
{

}

void UK26IsSurvivorInRangeOfAnyIdleCrow::Authority_SetVariables(ACamperPlayer* trackedSurvivor, UAuthoritativeActorPoolComponent* authoritativeActorPoolComponent, const float range)
{

}

void UK26IsSurvivorInRangeOfAnyIdleCrow::Authority_OnInRangeChanged(const bool inRange)
{

}

void UK26IsSurvivorInRangeOfAnyIdleCrow::Authority_OnCrowProjectileStateChanged(AK26CrowProjectile* crowProjectile)
{

}

void UK26IsSurvivorInRangeOfAnyIdleCrow::Authority_OnCrowAddedToPool(AActor* crowProjectileActor)
{

}

UK26IsSurvivorInRangeOfAnyIdleCrow::UK26IsSurvivorInRangeOfAnyIdleCrow()
{
	this->_trackedSurvivor = NULL;
}
