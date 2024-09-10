#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement) { return 0; }
