#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "OriginatingEffectIsApplicable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOriginatingEffectIsApplicable : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UOriginatingEffectIsApplicable();
};

FORCEINLINE uint32 GetTypeHash(const UOriginatingEffectIsApplicable) { return 0; }
