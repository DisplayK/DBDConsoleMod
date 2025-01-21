#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapController.generated.h"

class UGMAdaptiveShadowMapSource;
class UMaterialInterface;
class UGMAdaptiveShadowMapAtlas;

UCLASS()
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapController : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UGMAdaptiveShadowMapAtlas* _atlas;

	UPROPERTY(Transient)
	UMaterialInterface* _lightFunctionMaterial;

	UPROPERTY(Transient)
	TArray<UGMAdaptiveShadowMapSource*> _shadowMapSourceList;

	UPROPERTY(Transient)
	TArray<UGMAdaptiveShadowMapSource*> _shadowMapSourceActivatedList;

public:
	UGMAdaptiveShadowMapController();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapController) { return 0; }
