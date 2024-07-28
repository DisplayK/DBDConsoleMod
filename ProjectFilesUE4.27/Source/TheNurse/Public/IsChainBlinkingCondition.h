#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsChainBlinkingCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UIsChainBlinkingCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsChainBlinkingCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsChainBlinkingCondition) { return 0; }
