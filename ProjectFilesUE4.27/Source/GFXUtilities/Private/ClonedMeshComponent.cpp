#include "ClonedMeshComponent.h"

UClonedMeshComponent::UClonedMeshComponent()
{
	this->_originalToClone = TMap<USceneComponent*, UMeshComponent*>();
	this->_cloneToOriginal = TMap<UMeshComponent*, USceneComponent*>();
}
