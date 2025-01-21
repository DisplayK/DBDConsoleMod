#include "OnryoSurvivorCosmeticHelperActor.h"

class UGameplayTagContainerComponent;
class UCondemnedComponent;

UGameplayTagContainerComponent* AOnryoSurvivorCosmeticHelperActor::GetObjectState() const
{
	return NULL;
}

UCondemnedComponent* AOnryoSurvivorCosmeticHelperActor::GetCondemnedComponent() const
{
	return NULL;
}

AOnryoSurvivorCosmeticHelperActor::AOnryoSurvivorCosmeticHelperActor()
{
	this->_condemnedComponent = NULL;
}
