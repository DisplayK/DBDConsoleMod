#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerStatusEffectUpdateAnalytics.generated.h"

USTRUCT()
struct FPlayerStatusEffectUpdateAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	int32 ElapsedMatchTime;

	UPROPERTY()
	int32 NbOfConcurrentStatusEffects;

	UPROPERTY()
	TArray<FString> StatusEffects;

public:
	DBDANALYTICS_API FPlayerStatusEffectUpdateAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStatusEffectUpdateAnalytics) { return 0; }
