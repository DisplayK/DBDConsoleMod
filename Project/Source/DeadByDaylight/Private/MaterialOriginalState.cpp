#include "MaterialOriginalState.h"

FMaterialOriginalState::FMaterialOriginalState()
{
	this->MeshWithChangedMaterials = NULL;
	this->OriginalMaterial = TArray<UMaterialInterface*>();
}
