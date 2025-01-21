#include "HoudiniAssetBlueprintComponent.h"

void UHoudiniAssetBlueprintComponent::SetToggleValueAt(const FString& Name, bool Value, int32 Index)
{

}

void UHoudiniAssetBlueprintComponent::SetFloatParameter(const FString& Name, float Value, int32 Index)
{

}

bool UHoudiniAssetBlueprintComponent::HasParameter(const FString& Name)
{
	return false;
}

UHoudiniAssetBlueprintComponent::UHoudiniAssetBlueprintComponent()
{
	this->FauxBPProperty = false;
	this->bHoudiniAssetChanged = false;
	this->bUpdatedFromTemplate = false;
	this->bIsInBlueprintEditor = false;
	this->bCanDeleteHoudiniNodes = false;
	this->bHasRegisteredComponentTemplate = false;
	this->CachedOutputNodes = TMap<FHoudiniOutputObjectIdentifier, FGuid>();
	this->CachedInputNodes = TMap<FGuid, FGuid>();
}
