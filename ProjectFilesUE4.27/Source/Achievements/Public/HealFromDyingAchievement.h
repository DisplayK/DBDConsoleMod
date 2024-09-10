#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "HealFromDyingAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UHealFromDyingAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UHealFromDyingAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UHealFromDyingAchievement) { return 0; }
