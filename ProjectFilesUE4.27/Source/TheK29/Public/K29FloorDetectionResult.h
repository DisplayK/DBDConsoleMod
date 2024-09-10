#pragma once

#include "CoreMinimal.h"
#include "K29FloorDetectionResult.generated.h"

USTRUCT()
struct FK29FloorDetectionResult
{
	GENERATED_BODY()

public:
	THEK29_API FK29FloorDetectionResult();
};

FORCEINLINE uint32 GetTypeHash(const FK29FloorDetectionResult) { return 0; }
