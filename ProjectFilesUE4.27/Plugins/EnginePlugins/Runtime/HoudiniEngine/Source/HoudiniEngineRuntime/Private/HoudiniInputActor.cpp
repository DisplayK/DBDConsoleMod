#include "HoudiniInputActor.h"

UHoudiniInputActor::UHoudiniInputActor()
{
	this->ActorComponents = TArray<UHoudiniInputSceneComponent*>();
	this->ActorSceneComponents = TSet<TSoftObjectPtr<UObject>>();
	this->LastUpdateNumComponentsAdded = 0;
	this->LastUpdateNumComponentsRemoved = 0;
}
