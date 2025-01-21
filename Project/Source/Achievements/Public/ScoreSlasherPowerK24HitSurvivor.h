#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ScoreSlasherPowerK24HitSurvivor.generated.h"

UCLASS()
class ACHIEVEMENTS_API UScoreSlasherPowerK24HitSurvivor : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UScoreSlasherPowerK24HitSurvivor();
};

FORCEINLINE uint32 GetTypeHash(const UScoreSlasherPowerK24HitSurvivor) { return 0; }
