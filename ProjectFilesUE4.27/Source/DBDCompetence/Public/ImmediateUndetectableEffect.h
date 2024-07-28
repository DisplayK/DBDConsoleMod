#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ImmediateUndetectableEffect.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UImmediateUndetectableEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UImmediateUndetectableEffect();
};

FORCEINLINE uint32 GetTypeHash(const UImmediateUndetectableEffect) { return 0; }
