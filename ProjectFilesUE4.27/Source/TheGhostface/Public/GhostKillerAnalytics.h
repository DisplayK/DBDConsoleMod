#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "GhostKillerAnalytics.generated.h"

USTRUCT()
struct FGhostKillerAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	int32 Stalk;

	UPROPERTY()
	int32 StalkStealth;

	UPROPERTY()
	int32 Stalk25;

	UPROPERTY()
	int32 Stalk50;

	UPROPERTY()
	int32 Stalk75;

	UPROPERTY()
	int32 Stalk100;

	UPROPERTY()
	int32 StalkLean25;

	UPROPERTY()
	int32 StalkLean50;

	UPROPERTY()
	int32 StalkLean75;

	UPROPERTY()
	int32 StalkLean100;

	UPROPERTY()
	int32 Lean;

	UPROPERTY()
	int32 DownExposedSurvivor;

	UPROPERTY()
	float TimeInStealthMode;

public:
	THEGHOSTFACE_API FGhostKillerAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FGhostKillerAnalytics) { return 0; }
