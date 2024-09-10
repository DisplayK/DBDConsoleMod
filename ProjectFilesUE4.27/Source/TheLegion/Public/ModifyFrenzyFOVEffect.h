#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "ModifyFrenzyFOVEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THELEGION_API UModifyFrenzyFOVEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _increaseFOVPerHit;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _frenzyBaseFOV;

private:
	UFUNCTION()
	void Authority_OnFrenzyTierIncreased(int32 tier);

public:
	UModifyFrenzyFOVEffect();
};

FORCEINLINE uint32 GetTypeHash(const UModifyFrenzyFOVEffect) { return 0; }
