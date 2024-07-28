#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "BaseIsPerkUsableCondition.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UBaseIsPerkUsableCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UBaseIsPerkUsableCondition();
};

FORCEINLINE uint32 GetTypeHash(const UBaseIsPerkUsableCondition) { return 0; }
