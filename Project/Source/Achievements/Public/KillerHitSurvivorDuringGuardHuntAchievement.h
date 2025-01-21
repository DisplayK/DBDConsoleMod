#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "KillerHitSurvivorDuringGuardHuntAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UKillerHitSurvivorDuringGuardHuntAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UKillerHitSurvivorDuringGuardHuntAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKillerHitSurvivorDuringGuardHuntAchievement) { return 0; }
