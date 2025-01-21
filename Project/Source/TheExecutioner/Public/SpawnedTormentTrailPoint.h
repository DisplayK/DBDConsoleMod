#pragma once

#include "CoreMinimal.h"
#include "SpawnedTormentTrailPoint.generated.h"

class ATormentTrailPoint;

USTRUCT()
struct FSpawnedTormentTrailPoint
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	ATormentTrailPoint* TrailPoint;

public:
	THEEXECUTIONER_API FSpawnedTormentTrailPoint();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnedTormentTrailPoint) { return 0; }
