#include "HoudiniInstancedActorComponent.h"

UHoudiniInstancedActorComponent::UHoudiniInstancedActorComponent()
{
	this->InstancedObject = NULL;
	this->InstancedActors = TArray<AActor*>();
}
