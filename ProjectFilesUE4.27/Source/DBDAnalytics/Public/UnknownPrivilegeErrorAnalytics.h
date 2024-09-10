#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "UnknownPrivilegeErrorAnalytics.generated.h"

USTRUCT()
struct FUnknownPrivilegeErrorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 PrivilegeResults;

	UPROPERTY()
	TArray<FString> PlatformResults;

public:
	DBDANALYTICS_API FUnknownPrivilegeErrorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FUnknownPrivilegeErrorAnalytics) { return 0; }
