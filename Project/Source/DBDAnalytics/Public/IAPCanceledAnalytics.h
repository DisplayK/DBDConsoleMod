#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "IAPCanceledAnalytics.generated.h"

USTRUCT()
struct FIAPCanceledAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString itemId;

	UPROPERTY()
	FString provider;

public:
	DBDANALYTICS_API FIAPCanceledAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FIAPCanceledAnalytics) { return 0; }
