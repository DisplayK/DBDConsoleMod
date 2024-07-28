#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "BaseLingeringStatusEffect.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBaseLingeringStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _lingerDuration;

protected:
	UFUNCTION(BlueprintCallable)
	void SetLingerDuration(float lingerDuration);

	UFUNCTION(BlueprintCallable)
	void Authority_DeactivateEffect();

	UFUNCTION(BlueprintCallable)
	void Authority_ActivateEffect();

public:
	UBaseLingeringStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBaseLingeringStatusEffect) { return 0; }
