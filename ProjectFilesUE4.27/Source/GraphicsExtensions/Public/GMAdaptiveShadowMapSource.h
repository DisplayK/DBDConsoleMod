#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapSource.generated.h"

class UGMAdaptiveShadowMapAtlas;
class ULightComponent;

UCLASS(Abstract)
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSource : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UGMAdaptiveShadowMapAtlas* _atlas;

	UPROPERTY(Transient, Export)
	ULightComponent* _lightComponent;

public:
	UGMAdaptiveShadowMapSource();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapSource) { return 0; }
