#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapSourceComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSourceComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseAutoRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DepthMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DepthMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Levels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PreGeneratedLevels;

public:
	UFUNCTION(BlueprintCallable)
	void SetLightRadiusWithBounds(FVector BoundingSphereCenter, float BoundingSphereRadius);

public:
	UGMAdaptiveShadowMapSourceComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapSourceComponent) { return 0; }
