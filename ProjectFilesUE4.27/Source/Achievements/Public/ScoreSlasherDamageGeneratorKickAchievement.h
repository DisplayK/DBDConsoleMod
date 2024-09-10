#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ScoreSlasherDamageGeneratorKickAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UScoreSlasherDamageGeneratorKickAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UScoreSlasherDamageGeneratorKickAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UScoreSlasherDamageGeneratorKickAchievement) { return 0; }
