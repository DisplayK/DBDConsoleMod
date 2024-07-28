#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "AwardPipsAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UAwardPipsAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UAwardPipsAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UAwardPipsAchievement) { return 0; }
