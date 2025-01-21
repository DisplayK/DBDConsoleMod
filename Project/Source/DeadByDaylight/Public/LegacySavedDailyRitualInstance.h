#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "LegacySavedDailyRitualInstance.generated.h"

USTRUCT()
struct FLegacySavedDailyRitualInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName RitualKey;

	UPROPERTY(SaveGame)
	TArray<int32> CharacterIDs;

	UPROPERTY(SaveGame)
	TArray<EPlayerRole> Roles;

	UPROPERTY(SaveGame)
	float Progress;

	UPROPERTY(SaveGame)
	float Threshold;

	UPROPERTY(SaveGame)
	float Tolerance;

	UPROPERTY(SaveGame)
	float DisplayThreshold;

	UPROPERTY(SaveGame)
	float ExpReward;

	UPROPERTY(SaveGame)
	bool Active;

	UPROPERTY(SaveGame)
	bool Rewarded;

	UPROPERTY(SaveGame)
	bool StateChanged;

	UPROPERTY(SaveGame)
	FDateTime DateAssigned;

	UPROPERTY(SaveGame)
	int32 NbGameElapsed;

private:
	UPROPERTY(SaveGame)
	TArray<EDBDScoreTypes> TrackedEvents;

	UPROPERTY(SaveGame)
	TArray<FGameplayTag> TrackedGameEvents;

public:
	DEADBYDAYLIGHT_API FLegacySavedDailyRitualInstance();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedDailyRitualInstance) { return 0; }
