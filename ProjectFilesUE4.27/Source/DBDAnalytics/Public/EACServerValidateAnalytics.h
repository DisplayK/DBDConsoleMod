#pragma once

#include "CoreMinimal.h"
#include "EACClientInitAnalytics.h"
#include "EACServerValidateAnalytics.generated.h"

USTRUCT()
struct FEACServerValidateAnalytics: public FEACClientInitAnalytics
{
	GENERATED_BODY()

public:
	DBDANALYTICS_API FEACServerValidateAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEACServerValidateAnalytics) { return 0; }
