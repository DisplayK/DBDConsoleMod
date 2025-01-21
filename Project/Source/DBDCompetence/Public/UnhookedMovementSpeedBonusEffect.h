#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "UnhookedMovementSpeedBonusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UUnhookedMovementSpeedBonusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _movementSpeedBonusPercent;

public:
	UUnhookedMovementSpeedBonusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UUnhookedMovementSpeedBonusEffect) { return 0; }
