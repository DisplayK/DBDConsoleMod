#pragma once

#include "CoreMinimal.h"
#include "CustomizationBaseAnalytics.h"
#include "CustomizationAnalytics.generated.h"

USTRUCT()
struct FCustomizationAnalytics: public FCustomizationBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

public:
	DBDANALYTICS_API FCustomizationAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationAnalytics) { return 0; }
