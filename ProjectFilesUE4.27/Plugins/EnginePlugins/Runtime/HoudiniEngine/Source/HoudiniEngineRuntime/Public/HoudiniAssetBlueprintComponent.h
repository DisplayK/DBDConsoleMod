#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAssetComponent.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniAssetBlueprintComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	bool FauxBPProperty;

	UPROPERTY()
	bool bHoudiniAssetChanged;

	UPROPERTY(Transient, DuplicateTransient)
	bool bUpdatedFromTemplate;

	UPROPERTY()
	bool bIsInBlueprintEditor;

	UPROPERTY(Transient, DuplicateTransient)
	bool bCanDeleteHoudiniNodes;

	UPROPERTY(Transient, DuplicateTransient)
	bool bHasRegisteredComponentTemplate;

	UPROPERTY()
	TMap<FHoudiniOutputObjectIdentifier, FGuid> CachedOutputNodes;

	UPROPERTY()
	TMap<FGuid, FGuid> CachedInputNodes;

public:
	UFUNCTION(BlueprintCallable)
	void SetToggleValueAt(const FString& Name, bool Value, int32 Index);

	UFUNCTION(BlueprintCallable)
	void SetFloatParameter(const FString& Name, float Value, int32 Index);

	UFUNCTION(BlueprintCallable)
	bool HasParameter(const FString& Name);

public:
	UHoudiniAssetBlueprintComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetBlueprintComponent) { return 0; }
