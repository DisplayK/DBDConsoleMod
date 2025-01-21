#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CustomerSupportClientLoginAnalytics.generated.h"

USTRUCT()
struct FCustomerSupportClientLoginAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PlayerName;

	UPROPERTY()
	FString Provider;

public:
	DBDANALYTICS_API FCustomerSupportClientLoginAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCustomerSupportClientLoginAnalytics) { return 0; }
