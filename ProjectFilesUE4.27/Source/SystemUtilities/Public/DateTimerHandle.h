#pragma once

#include "CoreMinimal.h"
#include "DateTimerHandle.generated.h"

USTRUCT()
struct FDateTimerHandle
{
	GENERATED_BODY()

public:
	SYSTEMUTILITIES_API FDateTimerHandle();
};

FORCEINLINE uint32 GetTypeHash(const FDateTimerHandle) { return 0; }
