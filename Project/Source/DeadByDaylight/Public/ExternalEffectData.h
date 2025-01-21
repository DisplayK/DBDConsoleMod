#pragma once

#include "CoreMinimal.h"
#include "ExternalEffectData.generated.h"

USTRUCT(BlueprintType)
struct FExternalEffectData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FExternalEffectData();
};

FORCEINLINE uint32 GetTypeHash(const FExternalEffectData) { return 0; }
