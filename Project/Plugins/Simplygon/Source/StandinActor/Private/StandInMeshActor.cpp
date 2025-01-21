#include "StandInMeshActor.h"
#include "Components/StaticMeshComponent.h"

AStandInMeshActor::AStandInMeshActor()
{
	this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
}
