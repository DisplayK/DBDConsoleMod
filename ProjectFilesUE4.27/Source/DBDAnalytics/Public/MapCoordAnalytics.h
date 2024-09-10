#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MapCoordData.h"
#include "MapCoordAnalytics.generated.h"

USTRUCT()
struct FMapCoordAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	TArray<FMapCoordData> MapItem;

public:
	DBDANALYTICS_API FMapCoordAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMapCoordAnalytics) { return 0; }
