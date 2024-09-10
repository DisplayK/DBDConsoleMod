#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingSearchCompleteAnalytics.generated.h"

USTRUCT()
struct FMatchmakingSearchCompleteAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Success;

	UPROPERTY()
	int32 NumMatches;

	UPROPERTY()
	bool UsedFallback;

	UPROPERTY()
	FString ConnectingToUser;

	UPROPERTY()
	FString SearchParams;

	UPROPERTY()
	FString SearchResultSettings;

public:
	DBDANALYTICS_API FMatchmakingSearchCompleteAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingSearchCompleteAnalytics) { return 0; }
