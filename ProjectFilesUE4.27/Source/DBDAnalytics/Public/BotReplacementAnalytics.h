#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "BotReplacementAnalytics.generated.h"

USTRUCT()
struct FBotReplacementAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString KrakenMatchId;

	UPROPERTY()
	EPlayerRole Role;

	UPROPERTY()
	float MatchTime;

	UPROPERTY()
	FString CharacterName;

	UPROPERTY()
	FString ReplacedCharacterMirrorsId;

	UPROPERTY()
	EAIDifficultyLevel BotDifficultyLevel;

public:
	DBDANALYTICS_API FBotReplacementAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBotReplacementAnalytics) { return 0; }
