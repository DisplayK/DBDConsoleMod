#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "TwinLullabyRangeAdditiveEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinLullabyRangeAdditiveEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _defaultTwinLullabyDormantRange;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _twinLullabyDormantRange;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _twinLullabyAttachedRange;

public:
	UTwinLullabyRangeAdditiveEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinLullabyRangeAdditiveEffect) { return 0; }
