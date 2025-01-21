#pragma once

#include "CoreMinimal.h"
#include "GMAdaptiveShadowMapSource.h"
#include "GMAdaptiveShadowMapSourceSpot.generated.h"

class USpotLightComponent;

UCLASS()
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSourceSpot : public UGMAdaptiveShadowMapSource
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	USpotLightComponent* _spotLightComponent;

public:
	UGMAdaptiveShadowMapSourceSpot();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapSourceSpot) { return 0; }
