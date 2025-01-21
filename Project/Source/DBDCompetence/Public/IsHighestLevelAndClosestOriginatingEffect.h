#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "IsHighestLevelAndClosestOriginatingEffect.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _applicableEffects;

private:
	UFUNCTION()
	void OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid);

public:
	UIsHighestLevelAndClosestOriginatingEffect();
};

FORCEINLINE uint32 GetTypeHash(const UIsHighestLevelAndClosestOriginatingEffect) { return 0; }
