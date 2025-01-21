#pragma once

#include "CoreMinimal.h"
#include "Accumulator.generated.h"

USTRUCT()
struct FAccumulator
{
	GENERATED_BODY()

public:
	THEONI_API FAccumulator();
};

FORCEINLINE uint32 GetTypeHash(const FAccumulator) { return 0; }
