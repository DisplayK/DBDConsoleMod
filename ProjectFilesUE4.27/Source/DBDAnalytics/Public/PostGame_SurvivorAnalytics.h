#pragma once

#include "CoreMinimal.h"
#include "PostGameAnalyticsBase.h"
#include "ECamperDamageState.h"
#include "PostGame_SurvivorAnalytics.generated.h"

USTRUCT()
struct FPostGame_SurvivorAnalytics: public FPostGameAnalyticsBase
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Objectives;

	UPROPERTY()
	int32 Survival;

	UPROPERTY()
	int32 Altruism;

	UPROPERTY()
	int32 Boldness;

	UPROPERTY()
	int32 ObjectivesBonus;

	UPROPERTY()
	int32 SurvivalBonus;

	UPROPERTY()
	int32 AltruismBonus;

	UPROPERTY()
	int32 BoldnessBonus;

	UPROPERTY()
	int32 BonusEvent;

	UPROPERTY()
	int32 MatchIncentive;

	UPROPERTY()
	int32 TotalBloodpointsPostGame;

	UPROPERTY()
	FString Outcome;

	UPROPERTY()
	ECamperDamageState DamageState;

	UPROPERTY()
	int32 HookedCount;

	UPROPERTY()
	bool UsedController;

	UPROPERTY()
	bool UsedKeyboard;

	UPROPERTY()
	bool UsedHapticsVibration;

public:
	DBDANALYTICS_API FPostGame_SurvivorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPostGame_SurvivorAnalytics) { return 0; }
