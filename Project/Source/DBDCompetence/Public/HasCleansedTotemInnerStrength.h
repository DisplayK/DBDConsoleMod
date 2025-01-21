#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "HasCleansedTotemInnerStrength.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHasCleansedTotemInnerStrength : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UHasCleansedTotemInnerStrength();
};

FORCEINLINE uint32 GetTypeHash(const UHasCleansedTotemInnerStrength) { return 0; }
