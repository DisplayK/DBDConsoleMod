#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapAtlas.generated.h"

UCLASS()
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapAtlas : public UObject
{
	GENERATED_BODY()

public:
	UGMAdaptiveShadowMapAtlas();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapAtlas) { return 0; }
