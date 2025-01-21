#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "IsOwningPlayerInRangeFromHook.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UIsOwningPlayerInRangeFromHook();
};

FORCEINLINE uint32 GetTypeHash(const UIsOwningPlayerInRangeFromHook) { return 0; }
