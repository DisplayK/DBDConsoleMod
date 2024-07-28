#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "RTMConnectionLostAnalytics.generated.h"

USTRUCT()
struct FRTMConnectionLostAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 ErrorCode;

	UPROPERTY()
	FString ErrorMessage;

public:
	DBDANALYTICS_API FRTMConnectionLostAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FRTMConnectionLostAnalytics) { return 0; }
