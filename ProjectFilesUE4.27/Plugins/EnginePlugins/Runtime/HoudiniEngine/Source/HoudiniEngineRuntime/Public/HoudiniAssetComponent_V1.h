#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Components/PrimitiveComponent.h"
#include "BodySetupEnums.h"
#include "Engine/EngineTypes.h"
#include "HoudiniAssetComponent_V1.generated.h"

class UPhysicalMaterial;
class UAssetUserData;
class UFoliageType_InstancedStaticMesh;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
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
	float GeneratedDistanceFieldResolutionScale;

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

	UPROPERTY()
	FText BakeFolder;

	UPROPERTY()
	FText TempCookFolder;

public:
	UHoudiniAssetComponent_V1();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetComponent_V1) { return 0; }
