#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "CamperHealResult.h"
#include "Templates/SubclassOf.h"
#include "SoulGuard.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class USoulGuard : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _cooldownLevels;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _enduranceEffectClass;

	UPROPERTY(EditDefaultsOnly)
	bool _recover;

	UPROPERTY(EditDefaultsOnly)
	float _enduranceEffectDuration;

private:
	UFUNCTION()
	void Authority_OnSurvivorHealed(const FCamperHealResult& healResult);

public:
	USoulGuard();
};

FORCEINLINE uint32 GetTypeHash(const USoulGuard) { return 0; }
