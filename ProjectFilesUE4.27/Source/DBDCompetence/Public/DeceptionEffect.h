#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DeceptionEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeceptionEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _hideBloodTrailsWhenCamperFakeEnterLocker;

public:
	UDeceptionEffect();
};

FORCEINLINE uint32 GetTypeHash(const UDeceptionEffect) { return 0; }
