#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DailyRitualAnalytics.generated.h"

USTRUCT()
struct FDailyRitualAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Status;

	UPROPERTY()
	FString RitualId;

	UPROPERTY()
	float HoursElapsed;

	UPROPERTY()
	int32 Progress;

	UPROPERTY()
	int32 Threshold;

	UPROPERTY()
	int32 PendingRituals;

	UPROPERTY()
	int32 SpecificCharacter;

public:
	DBDANALYTICS_API FDailyRitualAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualAnalytics) { return 0; }
