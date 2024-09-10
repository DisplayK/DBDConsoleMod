#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LamentConfigurationPlayerPossessionAnalytics.generated.h"

USTRUCT()
struct FLamentConfigurationPlayerPossessionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	float PickUpElapsedMatchTime;

	UPROPERTY()
	float DropElapsedMatchTime;

	UPROPERTY()
	FString Outcome;

public:
	THEK25_API FLamentConfigurationPlayerPossessionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLamentConfigurationPlayerPossessionAnalytics) { return 0; }
