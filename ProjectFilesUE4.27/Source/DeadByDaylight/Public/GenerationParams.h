#pragma once

#include "CoreMinimal.h"
#include "GenerationParams.generated.h"

USTRUCT(BlueprintType)
struct FGenerationParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Seed;

public:
	DEADBYDAYLIGHT_API FGenerationParams();
};

FORCEINLINE uint32 GetTypeHash(const FGenerationParams) { return 0; }
