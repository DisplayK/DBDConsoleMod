#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsBoonBlessed.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsBoonBlessed : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsBoonBlessed();
};

FORCEINLINE uint32 GetTypeHash(const UIsBoonBlessed) { return 0; }
