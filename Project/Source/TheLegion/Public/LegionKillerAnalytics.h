#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LegionKillerAnalytics.generated.h"

USTRUCT()
struct FLegionKillerAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	int32 Pallet;

public:
	THELEGION_API FLegionKillerAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLegionKillerAnalytics) { return 0; }
