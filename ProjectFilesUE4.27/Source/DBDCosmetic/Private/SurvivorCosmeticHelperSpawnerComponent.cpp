#include "SurvivorCosmeticHelperSpawnerComponent.h"
#include "Templates/SubclassOf.h"

class ASurvivorCosmeticHelperActor;

TArray<ASurvivorCosmeticHelperActor*> USurvivorCosmeticHelperSpawnerComponent::GetCosmeticHelperActors() const
{
	return TArray<ASurvivorCosmeticHelperActor*>();
}

TArray<ASurvivorCosmeticHelperActor*> USurvivorCosmeticHelperSpawnerComponent::GetCosmeticHelperActorByClass(const TSubclassOf<ASurvivorCosmeticHelperActor> cosmeticHelperActorClassType) const
{
	return TArray<ASurvivorCosmeticHelperActor*>();
}

USurvivorCosmeticHelperSpawnerComponent::USurvivorCosmeticHelperSpawnerComponent()
{
	this->_survivorCosmeticActorHelperDB = NULL;
	this->survivorCosmeticHelperActors = TArray<ASurvivorCosmeticHelperActor*>();
}
