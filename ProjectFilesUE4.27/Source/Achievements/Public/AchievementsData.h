#pragma once

#include "CoreMinimal.h"
#include "CustomAchievementInfo.h"
#include "ScoreEventSimpleAchievementInfo.h"
#include "Engine/DataAsset.h"
#include "GameEventClassAchievementInfo.h"
#include "GameEventSimpleAchievementInfo.h"
#include "AchievementsData.generated.h"

UCLASS(BlueprintType)
class ACHIEVEMENTS_API UAchievementsData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FGameEventSimpleAchievementInfo> gameEventSimpleAchievements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FScoreEventSimpleAchievementInfo> scoreEventSimpleAchievements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FGameEventClassAchievementInfo> gameEventClassAchievements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FCustomAchievementInfo> customEventClassAchievements;

public:
	UAchievementsData();
};

FORCEINLINE uint32 GetTypeHash(const UAchievementsData) { return 0; }
