#pragma once

#include "CoreMinimal.h"
#include "DateTimerArray.generated.h"

USTRUCT()
struct FDateTimerArray
{
	GENERATED_BODY()

public:
	SYSTEMUTILITIES_API FDateTimerArray();
};

FORCEINLINE uint32 GetTypeHash(const FDateTimerArray) { return 0; }
