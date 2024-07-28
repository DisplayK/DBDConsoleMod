#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DeadMansSwitchEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDeadMansSwitchEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UDeadMansSwitchEffect();
};

FORCEINLINE uint32 GetTypeHash(const UDeadMansSwitchEffect) { return 0; }
