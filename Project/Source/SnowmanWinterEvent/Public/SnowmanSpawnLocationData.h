#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnowmanSpawnLocationData.generated.h"

USTRUCT()
struct FSnowmanSpawnLocationData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FVector OriginLocation;

	UPROPERTY(Transient)
	TArray<FVector> NavmeshLocations;

public:
	SNOWMANWINTEREVENT_API FSnowmanSpawnLocationData();
};

FORCEINLINE uint32 GetTypeHash(const FSnowmanSpawnLocationData) { return 0; }
