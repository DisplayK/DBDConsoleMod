#pragma once

#include "CoreMinimal.h"
#include "AchievementBase.h"
#include "GameplayTagContainer.h"
#include "EDBDScoreTypes.h"
#include "OnGameEventAchievement.generated.h"

class AActor;

UCLASS(BlueprintType)
class ACHIEVEMENTS_API UOnGameEventAchievement : public UAchievementBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FGameplayTag> _gameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<EDBDScoreTypes> _scoreTypes;

protected:
	UFUNCTION()
	void OnScoreTypeEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);

public:
	UOnGameEventAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UOnGameEventAchievement) { return 0; }
