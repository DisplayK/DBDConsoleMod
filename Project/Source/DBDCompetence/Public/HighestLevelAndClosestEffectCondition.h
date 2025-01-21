#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "HighestLevelAndClosestEffectCondition.generated.h"

class UStatusEffect;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _effectsLevel1;

	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _effectsLevel2;

	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _effectsLevel3;

public:
	UFUNCTION(BlueprintCallable)
	void SetCurrentEffectLevel(int32 level);

	UFUNCTION(BlueprintCallable)
	void InitEffectArrays(FName effectIDLevel1, FName effectIDLevel2, FName effectIDLevel3);

public:
	UHighestLevelAndClosestEffectCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHighestLevelAndClosestEffectCondition) { return 0; }
