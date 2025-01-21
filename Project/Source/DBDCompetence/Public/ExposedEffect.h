#pragma once

#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "ExposedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UExposedEffect : public UAdjustableCooldownStatusEffect
{
	GENERATED_BODY()

public:
	UExposedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UExposedEffect) { return 0; }
