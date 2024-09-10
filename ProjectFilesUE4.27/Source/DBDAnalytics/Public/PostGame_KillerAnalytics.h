#pragma once

#include "CoreMinimal.h"
#include "PostGameAnalyticsBase.h"
#include "PostGame_KillerAnalytics.generated.h"

USTRUCT()
struct FPostGame_KillerAnalytics: public FPostGameAnalyticsBase
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Brutality;

	UPROPERTY()
	int32 Deviousness;

	UPROPERTY()
	int32 Hunter;

	UPROPERTY()
	int32 Sacrifice;

	UPROPERTY()
	int32 BrutalityBonus;

	UPROPERTY()
	int32 DeviousnessBonus;

	UPROPERTY()
	int32 HunterBonus;

	UPROPERTY()
	int32 SacrificeBonus;

	UPROPERTY()
	int32 BonusEvent;

	UPROPERTY()
	int32 MatchIncentive;

	UPROPERTY()
	int32 TotalBloodpointsPostGame;

	UPROPERTY()
	int32 EscapeesCount;

	UPROPERTY()
	int32 SacrificedCount;

	UPROPERTY()
	int32 KilledCount;

	UPROPERTY()
	int32 DisconnectCount;

	UPROPERTY()
	int32 BotCount;

	UPROPERTY()
	int32 TimeOpenGate;

	UPROPERTY()
	FString SurvivorSpawningPosition;

	UPROPERTY()
	int32 GeneratorsDone;

	UPROPERTY()
	FString EGS_starter;

	UPROPERTY()
	float EGS_time;

	UPROPERTY()
	float EGS_duration;

	UPROPERTY()
	int32 EGS_sacrifice;

	UPROPERTY()
	bool EGS_reachEnd;

	UPROPERTY()
	bool UsedController;

	UPROPERTY()
	bool UsedKeyboard;

	UPROPERTY()
	bool UsedHapticsVibration;

public:
	DBDANALYTICS_API FPostGame_KillerAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPostGame_KillerAnalytics) { return 0; }
