#include "DBDDecalComponent.h"

UDBDDecalComponent::UDBDDecalComponent()
{
	this->staticMeshDecals = TArray<UStaticMeshComponent*>();
	this->staticMeshGlass = TMap<UStaticMeshComponent*, UGlassStaticMesh*>();
	this->materialInstances = TArray<UMaterialInstanceDynamic*>();
	this->_decalCollection = NULL;
}
