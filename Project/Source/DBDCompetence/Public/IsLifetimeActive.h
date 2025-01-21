#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsLifetimeActive.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsLifetimeActive : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsLifetimeActive();
};

FORCEINLINE uint32 GetTypeHash(const UIsLifetimeActive) { return 0; }
