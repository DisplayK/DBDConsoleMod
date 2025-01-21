#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PrestigeRewardItemAnalytic.h"
#include "PrestigeLevelUpAnalytics.generated.h"

USTRUCT()
struct FPrestigeLevelUpAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString CharacterName;

	UPROPERTY()
	int32 NewPrestigeLevel;

	UPROPERTY()
	int32 BloodpointsSpent;

	UPROPERTY()
	TArray<FPrestigeRewardItemAnalytic> ItemRewards;

public:
	DBDANALYTICS_API FPrestigeLevelUpAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeLevelUpAnalytics) { return 0; }
