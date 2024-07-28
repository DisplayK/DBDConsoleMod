#include "ActorComponentExt.h"

class UActorComponent;
class AActor;
class ACharacter;
class ACamperPlayer;
class ADBDPlayer;
class ASlasherPlayer;
class APawn;

bool UActorComponentExt::IsLocallyObserved(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return false;
}

bool UActorComponentExt::IsLocallyControlled(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return false;
}

bool UActorComponentExt::HasAuthority(const UActorComponent* actorComponent)
{
	return false;
}

AActor* UActorComponentExt::GetValidatedOwner(const UActorComponent* actorComponent)
{
	return NULL;
}

ACamperPlayer* UActorComponentExt::GetOwningSurvivorChecked(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

ACamperPlayer* UActorComponentExt::GetOwningSurvivor(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

ADBDPlayer* UActorComponentExt::GetOwningPlayerInHierarchy(const UActorComponent* actorComponent)
{
	return NULL;
}

ADBDPlayer* UActorComponentExt::GetOwningPlayerChecked(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

ADBDPlayer* UActorComponentExt::GetOwningPlayer(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

APawn* UActorComponentExt::GetOwningPawnChecked(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

APawn* UActorComponentExt::GetOwningPawn(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

ASlasherPlayer* UActorComponentExt::GetOwningKiller(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

ACharacter* UActorComponentExt::GetOwningCharacterChecked(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

ACharacter* UActorComponentExt::GetOwningCharacter(const UActorComponent* actorComponent, bool recursiveSearch)
{
	return NULL;
}

UActorComponentExt::UActorComponentExt()
{

}
