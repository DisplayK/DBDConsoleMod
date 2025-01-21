#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameEventClassAchievementInfo.generated.h"

class UOnGameEventAchievement;

USTRUCT(BlueprintType)
struct FGameEventClassAchievementInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UOnGameEventAchievement> achievement;

public:
	ACHIEVEMENTS_API FGameEventClassAchievementInfo();
};

FORCEINLINE uint32 GetTypeHash(const FGameEventClassAchievementInfo) { return 0; }
