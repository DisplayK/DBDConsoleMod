#pragma once

#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "CamperHealResult.h"
#include "HemorrhageStatusEffect.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHemorrhageStatusEffect : public UAdjustableCooldownStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _cooldownFXTime;

	UPROPERTY(EditDefaultsOnly)
	bool _removeEffectWhenFullyHealed;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnStoppedHealing(const ADBDPlayer* instigator, const ADBDPlayer* target);

private:
	UFUNCTION()
	void Authority_OnSurvivorHealed(const FCamperHealResult& healResult);

public:
	UHemorrhageStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHemorrhageStatusEffect) { return 0; }
