#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsHighestTierOriginatingPerk.generated.h"

class UStatusEffect;
class UGameplayModifierContainer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsHighestTierOriginatingPerk : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _applicableEffects;

private:
	UFUNCTION()
	void OnStatusEffectApplicableChanged(UGameplayModifierContainer* gameplayModifierContainer, bool isApplicable);

	UFUNCTION()
	void OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid);

public:
	UIsHighestTierOriginatingPerk();
};

FORCEINLINE uint32 GetTypeHash(const UIsHighestTierOriginatingPerk) { return 0; }
