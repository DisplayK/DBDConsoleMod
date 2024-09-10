#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SelectableTileSpawnPoint.generated.h"

USTRUCT()
struct FSelectableTileSpawnPoint
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FComponentReference ComponentReference;

public:
	DEADBYDAYLIGHT_API FSelectableTileSpawnPoint();
};

FORCEINLINE uint32 GetTypeHash(const FSelectableTileSpawnPoint) { return 0; }
