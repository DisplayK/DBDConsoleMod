#pragma once

#include "CoreMinimal.h"
#include "QuadrantInfo.generated.h"

USTRUCT()
struct FQuadrantInfo
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FQuadrantInfo();
};

FORCEINLINE uint32 GetTypeHash(const FQuadrantInfo) { return 0; }
