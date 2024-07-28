#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventSimpleAchievementInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameEventSimpleAchievementInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FGameplayTag> gameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FName> profileStats;

public:
	ACHIEVEMENTS_API FGameEventSimpleAchievementInfo();
};

FORCEINLINE uint32 GetTypeHash(const FGameEventSimpleAchievementInfo) { return 0; }
