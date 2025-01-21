#pragma once

#include "CoreMinimal.h"
#include "EHoudiniInputType.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniXformType.h"
#include "EHoudiniLandscapeExportType.h"
#include "HoudiniInput.generated.h"

class UHoudiniInputObject;
class AActor;
class UHoudiniInputHoudiniSplineComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInput : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	FString Label;

	UPROPERTY()
	EHoudiniInputType Type;

	UPROPERTY(Transient, DuplicateTransient)
	EHoudiniInputType PreviousType;

	UPROPERTY(Transient, DuplicateTransient)
	int32 AssetNodeId;

	UPROPERTY(NonTransactional, Transient, DuplicateTransient)
	int32 InputNodeId;

	UPROPERTY()
	int32 InputIndex;

	UPROPERTY(NonTransactional, Transient, DuplicateTransient)
	int32 ParmId;

	UPROPERTY()
	bool bIsObjectPathParameter;

	UPROPERTY(NonTransactional, Transient, DuplicateTransient)
	TArray<int32> CreatedDataNodeIds;

	UPROPERTY(Transient, DuplicateTransient)
	bool bHasChanged;

	UPROPERTY(Transient, DuplicateTransient)
	bool bNeedsToTriggerUpdate;

	UPROPERTY()
	FString Help;

	UPROPERTY()
	EHoudiniXformType KeepWorldTransform;

	UPROPERTY()
	bool bPackBeforeMerge;

	UPROPERTY()
	bool bImportAsReference;

	UPROPERTY()
	bool bExportLODs;

	UPROPERTY()
	bool bExportSockets;

	UPROPERTY()
	bool bExportColliders;

	UPROPERTY()
	bool bCookOnCurveChanged;

	UPROPERTY()
	TArray<UHoudiniInputObject*> GeometryInputObjects;

	UPROPERTY()
	bool bStaticMeshChanged;

	UPROPERTY()
	TArray<UHoudiniInputObject*> AssetInputObjects;

	UPROPERTY()
	bool bInputAssetConnectedInHoudini;

	UPROPERTY()
	TArray<UHoudiniInputObject*> CurveInputObjects;

	UPROPERTY()
	float DefaultCurveOffset;

	UPROPERTY()
	bool bAddRotAndScaleAttributesOnCurves;

	UPROPERTY()
	TArray<UHoudiniInputObject*> LandscapeInputObjects;

	UPROPERTY()
	bool bLandscapeHasExportTypeChanged;

	UPROPERTY()
	TArray<UHoudiniInputObject*> WorldInputObjects;

	UPROPERTY()
	TArray<AActor*> WorldInputBoundSelectorObjects;

	UPROPERTY()
	bool bIsWorldInputBoundSelector;

	UPROPERTY()
	bool bWorldInputBoundSelectorAutoUpdate;

	UPROPERTY()
	float UnrealSplineResolution;

	UPROPERTY()
	TArray<UHoudiniInputObject*> SkeletalInputObjects;

public:
	UPROPERTY(Transient, DuplicateTransient)
	TArray<UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;

	UPROPERTY(NonTransactional, Transient, DuplicateTransient)
	TArray<UHoudiniInputObject*> LastUndoDeletedInputs;

	UPROPERTY()
	bool bUpdateInputLandscape;

	UPROPERTY()
	EHoudiniLandscapeExportType LandscapeExportType;

	UPROPERTY()
	bool bLandscapeExportSelectionOnly;

	UPROPERTY()
	bool bLandscapeAutoSelectComponent;

	UPROPERTY()
	bool bLandscapeExportMaterials;

	UPROPERTY()
	bool bLandscapeExportLighting;

	UPROPERTY()
	bool bLandscapeExportNormalizedUVs;

	UPROPERTY()
	bool bLandscapeExportTileUVs;

	UPROPERTY()
	bool bCanDeleteHoudiniNodes;

public:
	UHoudiniInput();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInput) { return 0; }
