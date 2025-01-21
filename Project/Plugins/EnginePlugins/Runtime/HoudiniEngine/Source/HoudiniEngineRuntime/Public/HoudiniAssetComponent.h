#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHoudiniAssetState.h"
#include "HoudiniAssetStateEvents.h"
#include "HoudiniStaticMeshGenerationProperties.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "EHoudiniStaticMeshMethod.h"
#include "EHoudiniAssetStateResult.h"
#include "HoudiniBakedOutput.h"
#include "HoudiniAssetComponent.generated.h"

class UHoudiniInput;
class UHoudiniAsset;
class UHoudiniAssetComponent;
class UHoudiniParameter;
class UHoudiniOutput;
class UHoudiniHandleComponent;
class UHoudiniPDGAssetLink;
class AActor;
class UObject;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetComponent : public UPrimitiveComponent, public IHoudiniAssetStateEvents
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	UHoudiniAsset* HoudiniAsset;

	UPROPERTY()
	bool bCookOnParameterChange;

	UPROPERTY()
	bool bUploadTransformsToHoudiniEngine;

	UPROPERTY()
	bool bCookOnTransformChange;

	UPROPERTY()
	bool bCookOnAssetInputCook;

	UPROPERTY()
	bool bOutputless;

	UPROPERTY()
	bool bOutputTemplateGeos;

	UPROPERTY()
	bool bUseOutputNodes;

	UPROPERTY()
	FDirectoryPath TemporaryCookFolder;

	UPROPERTY()
	FDirectoryPath BakeFolder;

	UPROPERTY(EditAnywhere)
	EHoudiniStaticMeshMethod StaticMeshMethod;

	UPROPERTY(EditAnywhere)
	FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;

	UPROPERTY(EditAnywhere)
	FMeshBuildSettings StaticMeshBuildSettings;

	UPROPERTY(EditAnywhere)
	bool bOverrideGlobalProxyStaticMeshSettings;

	UPROPERTY(EditAnywhere)
	bool bEnableProxyStaticMeshOverride;

	UPROPERTY(EditAnywhere)
	bool bEnableProxyStaticMeshRefinementByTimerOverride;

	UPROPERTY(EditAnywhere)
	float ProxyMeshAutoRefineTimeoutSecondsOverride;

	UPROPERTY(EditAnywhere)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;

	UPROPERTY(EditAnywhere)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;

protected:
	UPROPERTY(DuplicateTransient)
	int32 AssetId;

	UPROPERTY(Transient, DuplicateTransient)
	TArray<int32> NodeIdsToCook;

	UPROPERTY(DuplicateTransient, Export)
	TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;

	UPROPERTY(DuplicateTransient)
	FGuid ComponentGUID;

	UPROPERTY(DuplicateTransient)
	FGuid HapiGUID;

	UPROPERTY(DuplicateTransient)
	FString HapiAssetName;

	UPROPERTY(DuplicateTransient)
	EHoudiniAssetState AssetState;

	UPROPERTY(DuplicateTransient)
	EHoudiniAssetState DebugLastAssetState;

	UPROPERTY(DuplicateTransient)
	EHoudiniAssetStateResult AssetStateResult;

	UPROPERTY()
	uint32 SubAssetIndex;

	UPROPERTY(DuplicateTransient)
	int32 AssetCookCount;

	UPROPERTY(DuplicateTransient)
	bool bHasBeenLoaded;

	UPROPERTY(DuplicateTransient)
	bool bHasBeenDuplicated;

	UPROPERTY(DuplicateTransient)
	bool bPendingDelete;

	UPROPERTY(DuplicateTransient)
	bool bRecookRequested;

	UPROPERTY(DuplicateTransient)
	bool bRebuildRequested;

	UPROPERTY(DuplicateTransient)
	bool bEnableCooking;

	UPROPERTY(DuplicateTransient)
	bool bForceNeedUpdate;

	UPROPERTY(DuplicateTransient)
	bool bLastCookSuccess;

	UPROPERTY(DuplicateTransient)
	bool bParameterDefinitionUpdateNeeded;

	UPROPERTY(DuplicateTransient)
	bool bBlueprintStructureModified;

	UPROPERTY(DuplicateTransient)
	bool bBlueprintModified;

	UPROPERTY(Export)
	TArray<UHoudiniParameter*> Parameters;

	UPROPERTY(Export)
	TArray<UHoudiniInput*> Inputs;

	UPROPERTY(Export)
	TArray<UHoudiniOutput*> Outputs;

	UPROPERTY()
	TArray<FHoudiniBakedOutput> BakedOutputs;

	UPROPERTY()
	TArray<TWeakObjectPtr<AActor>> UntrackedOutputs;

	UPROPERTY(Export)
	TArray<UHoudiniHandleComponent*> HandleComponents;

	UPROPERTY(Transient, DuplicateTransient)
	bool bHasComponentTransformChanged;

	UPROPERTY(Transient, DuplicateTransient)
	bool bFullyLoaded;

	UPROPERTY()
	UHoudiniPDGAssetLink* PDGAssetLink;

	UPROPERTY()
	FTimerHandle RefineMeshesTimer;

	UPROPERTY(DuplicateTransient)
	bool bNoProxyMeshNextCookRequested;

	UPROPERTY(Transient, DuplicateTransient)
	TMap<UObject*, int32> InputPresets;

	UPROPERTY(DuplicateTransient)
	bool bBakeAfterNextCook;

	UPROPERTY(Transient, DuplicateTransient)
	bool bCachedIsPreview;

	UPROPERTY(Transient)
	double LastTickTime;

public:
	UHoudiniAssetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetComponent) { return 0; }
