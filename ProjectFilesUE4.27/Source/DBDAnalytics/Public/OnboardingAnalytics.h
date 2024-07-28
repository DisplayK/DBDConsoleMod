#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "OnboardingAnalytics.generated.h"

USTRUCT()
struct FOnboardingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 TabIndex;

	UPROPERTY()
	int32 GameManualIndex;

	UPROPERTY()
	FString EventTimestamp;

public:
	DBDANALYTICS_API FOnboardingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingAnalytics) { return 0; }
