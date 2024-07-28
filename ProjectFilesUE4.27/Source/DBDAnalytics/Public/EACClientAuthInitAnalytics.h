#pragma once

#include "CoreMinimal.h"
#include "EACClientInitAnalytics.h"
#include "EACClientAuthInitAnalytics.generated.h"

USTRUCT()
struct FEACClientAuthInitAnalytics: public FEACClientInitAnalytics
{
	GENERATED_BODY()

public:
	DBDANALYTICS_API FEACClientAuthInitAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEACClientAuthInitAnalytics) { return 0; }
