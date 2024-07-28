#pragma once

#include "CoreMinimal.h"
#include "HitValidationRecorder.generated.h"

USTRUCT()
struct FHitValidationRecorder
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float CacheTimespan;

public:
	DEADBYDAYLIGHT_API FHitValidationRecorder();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationRecorder) { return 0; }
