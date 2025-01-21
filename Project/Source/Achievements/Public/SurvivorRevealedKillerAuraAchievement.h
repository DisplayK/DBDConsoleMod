#pragma once

#include "CoreMinimal.h"
#include "AchievementBase.h"
#include "GameplayTagContainer.h"
#include "SurvivorRevealedKillerAuraAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API USurvivorRevealedKillerAuraAchievement : public UAchievementBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _survivorFlagTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _killerFlagTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _modifierTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _dontAwardIfKillerHasTags;

public:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void Local_OnRevealKillerAura();

public:
	USurvivorRevealedKillerAuraAchievement();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorRevealedKillerAuraAchievement) { return 0; }
