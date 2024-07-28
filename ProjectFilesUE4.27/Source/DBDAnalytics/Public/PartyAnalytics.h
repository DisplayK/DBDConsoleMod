#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PartyAnalytics.generated.h"

USTRUCT()
struct FPartyAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PartyId;

public:
	DBDANALYTICS_API FPartyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyAnalytics) { return 0; }
