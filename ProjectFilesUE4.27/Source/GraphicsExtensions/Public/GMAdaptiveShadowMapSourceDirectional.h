#pragma once

#include "CoreMinimal.h"
#include "GMAdaptiveShadowMapSource.h"
#include "GMAdaptiveShadowMapSourceDirectional.generated.h"

class UDirectionalLightComponent;

UCLASS()
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSourceDirectional : public UGMAdaptiveShadowMapSource
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UDirectionalLightComponent* _directionalLightComponent;

public:
	UGMAdaptiveShadowMapSourceDirectional();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapSourceDirectional) { return 0; }
