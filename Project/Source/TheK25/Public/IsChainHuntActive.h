#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsChainHuntActive.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsChainHuntActive : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsChainHuntActive();
};

FORCEINLINE uint32 GetTypeHash(const UIsChainHuntActive) { return 0; }
