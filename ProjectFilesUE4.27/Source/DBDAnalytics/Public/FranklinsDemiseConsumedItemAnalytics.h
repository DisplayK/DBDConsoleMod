#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "FranklinsDemiseConsumedItemAnalytics.generated.h"

USTRUCT()
struct FFranklinsDemiseConsumedItemAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PreviousOwnerSurvivorMirrorsId;

public:
	DBDANALYTICS_API FFranklinsDemiseConsumedItemAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FFranklinsDemiseConsumedItemAnalytics) { return 0; }
