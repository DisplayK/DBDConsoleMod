#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/BodyInstance.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniRuntimeSettingsSessionType.h"
#include "BodySetupEnums.h"
#include "Engine/EngineTypes.h"
#include "EHoudiniRuntimeSettingsRecomputeFlag.h"
#include "EHoudiniExecutableType.h"
#include "HoudiniRuntimeSettings.generated.h"

class UAssetUserData;
class UFoliageType_InstancedStaticMesh;
class UPhysicalMaterial;

UCLASS(BlueprintType)
class HOUDINIENGINERUNTIME_API UHoudiniRuntimeSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType> SessionType;

	UPROPERTY(EditAnywhere)
	FString ServerHost;

	UPROPERTY(EditAnywhere)
	int32 ServerPort;

	UPROPERTY(EditAnywhere)
	FString ServerPipeName;

	UPROPERTY(EditAnywhere)
	bool bStartAutomaticServer;

	UPROPERTY(EditAnywhere)
	float AutomaticServerTimeout;

	UPROPERTY(EditAnywhere)
	bool bSyncWithHoudiniCook;

	UPROPERTY(EditAnywhere)
	bool bCookUsingHoudiniTime;

	UPROPERTY(EditAnywhere)
	bool bSyncViewport;

	UPROPERTY(EditAnywhere)
	bool bSyncHoudiniViewport;

	UPROPERTY(EditAnywhere)
	bool bSyncUnrealViewport;

	UPROPERTY(EditAnywhere)
	bool bShowMultiAssetDialog;

	UPROPERTY(EditAnywhere)
	bool bPreferHdaMemoryCopyOverHdaSourceFile;

	UPROPERTY(EditAnywhere)
	bool bPauseCookingOnStart;

	UPROPERTY(EditAnywhere)
	bool bDisplaySlateCookingNotifications;

	UPROPERTY(EditAnywhere)
	FString DefaultTemporaryCookFolder;

	UPROPERTY(EditAnywhere)
	FString DefaultBakeFolder;

	UPROPERTY(EditAnywhere)
	bool MarshallingLandscapesUseDefaultUnrealScaling;

	UPROPERTY(EditAnywhere)
	bool MarshallingLandscapesUseFullResolution;

	UPROPERTY(EditAnywhere)
	bool MarshallingLandscapesForceMinMaxValues;

	UPROPERTY(VisibleAnywhere)
	float MarshallingLandscapesForcedMinValue;

	UPROPERTY(VisibleAnywhere)
	float MarshallingLandscapesForcedMaxValue;

	UPROPERTY(EditAnywhere)
	bool bAddRotAndScaleAttributesOnCurves;

	UPROPERTY(EditAnywhere)
	float MarshallingSplineResolution;

	UPROPERTY(EditAnywhere)
	bool bEnableProxyStaticMesh;

	UPROPERTY(EditAnywhere)
	bool bShowDefaultMesh;

	UPROPERTY(EditAnywhere)
	bool bEnableProxyStaticMeshRefinementByTimer;

	UPROPERTY(EditAnywhere)
	float ProxyMeshAutoRefineTimeoutSeconds;

	UPROPERTY(EditAnywhere)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorld;

	UPROPERTY(EditAnywhere)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIE;

	UPROPERTY(EditAnywhere)
	uint8 bDoubleSidedGeometry : 1;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* PhysMaterial;

	UPROPERTY(EditAnywhere)
	FBodyInstance DefaultBodyInstance;

	UPROPERTY(VisibleDefaultsOnly)
	TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;

	UPROPERTY(EditAnywhere)
	int32 LightMapResolution;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float LpvBiasMultiplier;

	UPROPERTY(EditAnywhere)
	float GeneratedDistanceFieldResolutionScale;

	UPROPERTY(EditAnywhere)
	FWalkableSlopeOverride WalkableSlopeOverride;

	UPROPERTY(EditAnywhere)
	int32 LightMapCoordinateIndex;

	UPROPERTY(EditAnywhere)
	uint8 bUseMaximumStreamingTexelRatio : 1;

	UPROPERTY(EditAnywhere)
	float StreamingDistanceMultiplier;

	UPROPERTY(EditAnywhere, Export)
	UFoliageType_InstancedStaticMesh* FoliageDefaultSettings;

	UPROPERTY(EditAnywhere, Export)
	TArray<UAssetUserData*> AssetUserData;

	UPROPERTY(EditAnywhere)
	bool bUseFullPrecisionUVs;

	UPROPERTY(EditAnywhere)
	int32 SrcLightmapIndex;

	UPROPERTY(EditAnywhere)
	int32 DstLightmapIndex;

	UPROPERTY(EditAnywhere)
	int32 MinLightmapResolution;

	UPROPERTY(EditAnywhere)
	bool bRemoveDegenerates;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> GenerateLightmapUVsFlag;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeNormalsFlag;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeTangentsFlag;

	UPROPERTY(EditAnywhere)
	bool bUseMikkTSpace;

	UPROPERTY(EditAnywhere)
	bool bBuildAdjacencyBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bComputeWeightedNormals : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bBuildReversedIndexBuffer : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bUseHighPrecisionTangentBasis : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceFieldResolutionScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bGenerateDistanceFieldAsIfTwoSided : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bSupportFaceRemap : 1;

	UPROPERTY(EditAnywhere)
	bool bPDGAsyncCommandletImportEnabled;

	UPROPERTY(EditAnywhere)
	bool bEnableBackwardCompatibility;

	UPROPERTY(EditAnywhere)
	bool bAutomaticLegacyHDARebuild;

	UPROPERTY(EditAnywhere)
	bool bUseCustomHoudiniLocation;

	UPROPERTY(EditAnywhere)
	FDirectoryPath CustomHoudiniLocation;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EHoudiniExecutableType> HoudiniExecutable;

	UPROPERTY(EditAnywhere)
	int32 CookingThreadStackSize;

	UPROPERTY(EditAnywhere)
	FString HoudiniEnvironmentFiles;

	UPROPERTY(EditAnywhere)
	FString OtlSearchPath;

	UPROPERTY(EditAnywhere)
	FString DsoSearchPath;

	UPROPERTY(EditAnywhere)
	FString ImageDsoSearchPath;

	UPROPERTY(EditAnywhere)
	FString AudioDsoSearchPath;

public:
	UHoudiniRuntimeSettings();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniRuntimeSettings) { return 0; }
