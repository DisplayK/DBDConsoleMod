#pragma once

#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.generated.h"

USTRUCT()
struct FBaseSingleStructIndexAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString SessionGuid;

public:
	BHVRANALYTICS_API FBaseSingleStructIndexAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBaseSingleStructIndexAnalytics) { return 0; }
