#pragma once

#include "CoreMinimal.h"
#include "FastTimer.generated.h"

USTRUCT(BlueprintType)
struct FFastTimer
{
	GENERATED_BODY()

public:
	SYSTEMUTILITIES_API FFastTimer();
};

FORCEINLINE uint32 GetTypeHash(const FFastTimer) { return 0; }
