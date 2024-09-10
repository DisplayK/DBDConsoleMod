#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpawnInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UClass* ActorClass;

	UPROPERTY()
	FTransform Transform;

public:
	DEADBYDAYLIGHT_API FSpawnInfo();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnInfo) { return 0; }
