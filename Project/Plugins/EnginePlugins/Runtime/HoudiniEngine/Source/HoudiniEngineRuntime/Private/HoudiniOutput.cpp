#include "HoudiniOutput.h"

UHoudiniOutput::UHoudiniOutput()
{
	this->Type = EHoudiniOutputType::Invalid;
	this->HoudiniGeoPartObjects = TArray<FHoudiniGeoPartObject>();
	this->OutputObjects = TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject>();
	this->InstancedOutputs = TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput>();
	this->AssignementMaterials = TMap<FString, UMaterialInterface*>();
	this->ReplacementMaterials = TMap<FString, UMaterialInterface*>();
	this->bLandscapeWorldComposition = false;
	this->HoudiniCreatedSocketActors = TArray<AActor*>();
	this->HoudiniAttachedSocketActors = TArray<AActor*>();
	this->bIsEditableNode = false;
	this->bHasEditableNodeBuilt = false;
	this->bIsUpdating = false;
	this->bCanDeleteHoudiniNodes = true;
}
