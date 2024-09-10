#pragma once

#include "CoreMinimal.h"
#include "SavedStatsDataV7.generated.h"

USTRUCT()
struct FSavedStatsDataV7
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName Name;

	UPROPERTY(SaveGame)
	float Value;

public:
	DEADBYDAYLIGHT_API FSavedStatsDataV7();
};

FORCEINLINE uint32 GetTypeHash(const FSavedStatsDataV7) { return 0; }
