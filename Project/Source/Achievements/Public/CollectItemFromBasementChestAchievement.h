#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "CollectItemFromBasementChestAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UCollectItemFromBasementChestAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UCollectItemFromBasementChestAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UCollectItemFromBasementChestAchievement) { return 0; }
