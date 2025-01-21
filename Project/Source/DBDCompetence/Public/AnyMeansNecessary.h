#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "GameplayTagContainer.h"
#include "AnyMeansNecessary.generated.h"

class UStatusEffect;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAnyMeansNecessary : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool RevealSurvivorOnPalletPullUpStarted;

	UPROPERTY(EditDefaultsOnly)
	bool RevealSurvivorOnPalletPulledUp;

	UPROPERTY(EditDefaultsOnly)
	float RevealSurvivorDuration;

	UPROPERTY(Transient, Export)
	TWeakObjectPtr<UStatusEffect> _effect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _cooldownDuration;

private:
	UFUNCTION()
	void Authority_OnPalletPullUpStarted(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnPalletPulledUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UAnyMeansNecessary();
};

FORCEINLINE uint32 GetTypeHash(const UAnyMeansNecessary) { return 0; }
