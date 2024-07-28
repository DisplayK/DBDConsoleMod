#include "HoudiniMeshSplitInstancerComponent.h"

UHoudiniMeshSplitInstancerComponent::UHoudiniMeshSplitInstancerComponent()
{
	this->Instances = TArray<UStaticMeshComponent*>();
	this->OverrideMaterials = TArray<UMaterialInterface*>();
	this->InstancedMesh = NULL;
}
