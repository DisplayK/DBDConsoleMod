#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnowmanSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FSnowmanSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FVector SpawnLocation;

	UPROPERTY(Transient)
	FRotator SpawnRotation;

public:
	SNOWMANWINTEREVENT_API FSnowmanSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FSnowmanSpawnData) { return 0; }
