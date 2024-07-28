#pragma once

#include "CoreMinimal.h"
#include "FreeToPlayData.h"
#include "FreeToPlayEventData.generated.h"

USTRUCT()
struct FFreeToPlayEventData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FFreeToPlayData Event;

public:
	DEADBYDAYLIGHT_API FFreeToPlayEventData();
};

FORCEINLINE uint32 GetTypeHash(const FFreeToPlayEventData) { return 0; }
