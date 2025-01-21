#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PerPlatformProperties.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapControllerComponent.generated.h"

class UGMAdaptiveShadowMapSourceComponent;
class UGMAdaptiveShadowMapController;
class UGMAdaptiveShadowMapAtlas;
class UMaterialInterface;
class UGMAdaptiveShadowMapSource;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapControllerComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPerPlatformInt TileSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TileCountX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TileCountY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint GridSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeneratedTilesPerFrame;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt MaxPreallocatedTilesPerFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSupportsDirectionalLights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSupportsSpotLights;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* LightFunctionMaterial;

	UPROPERTY(EditAnywhere)
	float CullShadowIfPixelSizeLessThan;

	UPROPERTY(EditAnywhere)
	bool bPreviewOnly;

private:
	UPROPERTY(Transient)
	UGMAdaptiveShadowMapAtlas* _atlas;

	UPROPERTY(Transient)
	UGMAdaptiveShadowMapController* _controller;

	UPROPERTY(Transient)
	TMap<UGMAdaptiveShadowMapSourceComponent*, UGMAdaptiveShadowMapSource*> _shadowMapSources;

	UPROPERTY(Transient)
	UMaterialInstanceDynamic* _lightFunctionMaterialInstance;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void RebuildAtlas();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	bool IsControllerDonePreallocatingTiles();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 GetTileSize();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 GetTileCountY();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 GetTileCountX();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void DumpDebugInfo();

public:
	UGMAdaptiveShadowMapControllerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapControllerComponent) { return 0; }
