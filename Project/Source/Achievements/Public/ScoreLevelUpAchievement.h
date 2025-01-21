#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ScoreLevelUpAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UScoreLevelUpAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UScoreLevelUpAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UScoreLevelUpAchievement) { return 0; }
