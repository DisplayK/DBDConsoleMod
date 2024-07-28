#pragma once

#include "CoreMinimal.h"
#include "DateTimer.generated.h"

USTRUCT()
struct FDateTimer
{
	GENERATED_BODY()

public:
	SYSTEMUTILITIES_API FDateTimer();
};

FORCEINLINE uint32 GetTypeHash(const FDateTimer) { return 0; }
