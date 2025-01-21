#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ScoreSlasherKillAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UScoreSlasherKillAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UScoreSlasherKillAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UScoreSlasherKillAchievement) { return 0; }
