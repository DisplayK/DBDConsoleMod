#pragma once

#include "CoreMinimal.h"
#include "BodySetupEnums.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "HoudiniStaticMeshGenerationProperties.generated.h"

class UPhysicalMaterial;
class UAssetUserData;
class UFoliageType_InstancedStaticMesh;

USTRUCT(BlueprintType)
struct FHoudiniStaticMeshGenerationProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint8 bGeneratedDoubleSidedGeometry : 1;

	UPROPERTY(EditAnywhere)
	UPhysicalMaterial* GeneratedPhysMaterial;

	UPROPERTY(EditAnywhere)
	FBodyInstance DefaultBodyInstance;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;

	UPROPERTY(EditAnywhere)
	int32 GeneratedLightMapResolution;

	UPROPERTY(EditAnywhere)
	FWalkableSlopeOverride GeneratedWalkableSlopeOverride;

	UPROPERTY(EditAnywhere)
	int32 GeneratedLightMapCoordinateIndex;

	UPROPERTY(EditAnywhere)
	uint8 bGeneratedUseMaximumStreamingTexelRatio : 1;

	UPROPERTY(EditAnywhere)
	float GeneratedStreamingDistanceMultiplier;

	UPROPERTY(EditAnywhere, Export)
	UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;

	UPROPERTY(EditAnywhere, Export)
	TArray<UAssetUserData*> GeneratedAssetUserData;

public:
	HOUDINIENGINERUNTIME_API FHoudiniStaticMeshGenerationProperties();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniStaticMeshGenerationProperties) { return 0; }
