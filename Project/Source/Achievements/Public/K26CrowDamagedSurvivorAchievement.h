#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "K26CrowDamagedSurvivorAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UK26CrowDamagedSurvivorAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UK26CrowDamagedSurvivorAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UK26CrowDamagedSurvivorAchievement) { return 0; }
