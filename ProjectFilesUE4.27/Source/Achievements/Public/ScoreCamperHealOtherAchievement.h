#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ScoreCamperHealOtherAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UScoreCamperHealOtherAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UScoreCamperHealOtherAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UScoreCamperHealOtherAchievement) { return 0; }
