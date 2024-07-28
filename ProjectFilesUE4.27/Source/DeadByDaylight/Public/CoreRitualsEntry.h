#pragma once

#include "CoreMinimal.h"
#include "CoreRitualsDifficulty.h"
#include "CoreRitualsEntry.generated.h"

USTRUCT()
struct FCoreRitualsEntry
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	TArray<FCoreRitualsDifficulty> Difficulty;

public:
	DEADBYDAYLIGHT_API FCoreRitualsEntry();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRitualsEntry) { return 0; }
