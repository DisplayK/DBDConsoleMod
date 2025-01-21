#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GMAdaptiveShadowMapSourceComponentSpawner.generated.h"

UCLASS()
class GRAPHICSEXTENSIONS_API AGMAdaptiveShadowMapSourceComponentSpawner : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCreateASMSourceComponentOnBeginPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemoveCastForCinematicOnlyFlagOnLights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemoveLightFunctionMaterialOnLights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumLevelPerSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumPreGeneratedLevelPerSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreviewOnly;

public:
	AGMAdaptiveShadowMapSourceComponentSpawner();
};

FORCEINLINE uint32 GetTypeHash(const AGMAdaptiveShadowMapSourceComponentSpawner) { return 0; }
