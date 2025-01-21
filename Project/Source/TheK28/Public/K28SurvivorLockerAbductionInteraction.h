#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaseLockerInteraction.h"
#include "K28SurvivorLockerAbductionInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28SurvivorLockerAbductionInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_OverriddenInteractionInstance, Export)
	TWeakObjectPtr<UBaseLockerInteraction> _overriddenInteractionInstance;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _overridingTags;

	UPROPERTY(EditDefaultsOnly)
	float _fadeOutTime;

	UPROPERTY(EditDefaultsOnly)
	float _minDotProductFadeOutThreshold;

	UPROPERTY(EditDefaultsOnly)
	float _rotationMaxTime;

private:
	UFUNCTION()
	void OnRep_OverriddenInteractionInstance();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28SurvivorLockerAbductionInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28SurvivorLockerAbductionInteraction) { return 0; }
