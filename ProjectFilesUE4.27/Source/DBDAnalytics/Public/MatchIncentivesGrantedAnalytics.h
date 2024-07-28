#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "MatchIncentivesGrantedAnalytics.generated.h"

USTRUCT()
struct FMatchIncentivesGrantedAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString PlayerId;

	UPROPERTY()
	EPlayerRole PlayerRole;

	UPROPERTY()
	int32 Incentive;

public:
	DBDANALYTICS_API FMatchIncentivesGrantedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchIncentivesGrantedAnalytics) { return 0; }
