#pragma once

#include "CoreMinimal.h"
#include "NavMovePathPoint.generated.h"

USTRUCT()
struct FNavMovePathPoint
{
	GENERATED_BODY()

public:
	DBDBOTS_API FNavMovePathPoint();
};

FORCEINLINE uint32 GetTypeHash(const FNavMovePathPoint) { return 0; }
