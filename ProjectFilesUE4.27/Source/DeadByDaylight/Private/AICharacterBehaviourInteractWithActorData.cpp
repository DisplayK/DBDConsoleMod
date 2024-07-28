#include "AICharacterBehaviourInteractWithActorData.h"
#include "GameplayTagContainer.h"
#include "ECharacterMovementTypes.h"

class AActor;

void UAICharacterBehaviourInteractWithActorData::WatchGameEventTypes(TArray<FGameplayTag> gameEventTypes)
{

}

void UAICharacterBehaviourInteractWithActorData::WatchGameEventType(FGameplayTag gameEventType)
{

}

void UAICharacterBehaviourInteractWithActorData::Init(AActor* actor, ECharacterMovementTypes characterMovementTypeNew, bool usePathfindingNew)
{

}

UAICharacterBehaviourInteractWithActorData::UAICharacterBehaviourInteractWithActorData()
{
	this->TargetActor = NULL;
	this->CharacterMovementType = ECharacterMovementTypes::Normal;
	this->UsePathfinding = true;
}
