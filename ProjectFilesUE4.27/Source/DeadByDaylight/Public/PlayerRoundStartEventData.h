#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "PlayerRankData.h"
#include "PlayerRoundStartEventData.generated.h"

USTRUCT()
struct FPlayerRoundStartEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(Transient)
	bool IsABot;

	UPROPERTY(Transient)
	EAIDifficultyLevel BotDifficultyLevel;

	UPROPERTY(Transient)
	FString BotName;

	UPROPERTY(Transient)
	FString BotMirrorID;

	UPROPERTY(Transient)
	int32 CharacterId;

	UPROPERTY(Transient)
	int32 PlayerRankForRole;

	UPROPERTY(Transient)
	int32 PrestigeLevel;

	UPROPERTY(Transient)
	int32 BloodWebLevel;

	UPROPERTY(Transient)
	int32 Pips;

	UPROPERTY(Transient)
	TArray<FPlayerRankData> PlayerRankDataArray;

public:
	DEADBYDAYLIGHT_API FPlayerRoundStartEventData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerRoundStartEventData) { return 0; }
