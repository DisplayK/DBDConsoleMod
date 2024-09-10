#include "DBDInstancedFoliageComponent.h"

UDBDInstancedFoliageComponent::UDBDInstancedFoliageComponent()
{
	this->NextBaseId = 0;
	this->InstanceBaseMap = TMap<int32, USceneComponent*>();
	this->foliage = TArray<FDBDFoliageInfo>();
}
