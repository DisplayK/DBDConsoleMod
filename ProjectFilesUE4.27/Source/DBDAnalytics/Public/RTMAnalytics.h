#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "RTMAnalytics.generated.h"

USTRUCT()
struct FRTMAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString RTMType;

	UPROPERTY()
	uint32 RTMSize;

	UPROPERTY()
	FString CurrentGameFlowStep;

public:
	DBDANALYTICS_API FRTMAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FRTMAnalytics) { return 0; }
