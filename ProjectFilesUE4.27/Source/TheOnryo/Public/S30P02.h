#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S30P02.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US30P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _auraReadingDistance;

	UPROPERTY(EditDefaultsOnly)
	float _healingOthersBonus;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealAuraStatusEffectToImpose;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _showHUDIconStatusEffectToImpose;

	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _imposedShowHUDIconStatusEffects;

private:
	UFUNCTION(BlueprintPure)
	float GetHealingOthersBonus() const;

public:
	US30P02();
};

FORCEINLINE uint32 GetTypeHash(const US30P02) { return 0; }
