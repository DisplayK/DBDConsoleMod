#pragma once

#include "CoreMinimal.h"
#include "SavedStatsData.generated.h"

USTRUCT()
struct FSavedStatsData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	uint32 Version;

	UPROPERTY()
	FName Name;

	UPROPERTY()
	float Value;

public:
	DEADBYDAYLIGHT_API FSavedStatsData();
};

FORCEINLINE uint32 GetTypeHash(const FSavedStatsData) { return 0; }
