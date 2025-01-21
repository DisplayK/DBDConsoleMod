#pragma once

#include "CoreMinimal.h"
#include "GeneratorQueryHandlePair.generated.h"

USTRUCT(BlueprintType)
struct FGeneratorQueryHandlePair
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FGeneratorQueryHandlePair();
};

FORCEINLINE uint32 GetTypeHash(const FGeneratorQueryHandlePair) { return 0; }
