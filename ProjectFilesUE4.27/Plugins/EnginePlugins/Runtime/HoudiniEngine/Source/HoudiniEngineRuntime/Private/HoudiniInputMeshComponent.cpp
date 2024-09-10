#include "HoudiniInputMeshComponent.h"

UHoudiniInputMeshComponent::UHoudiniInputMeshComponent()
{
	this->StaticMesh = NULL;
	this->MeshComponentsMaterials = TArray<FString>();
}
