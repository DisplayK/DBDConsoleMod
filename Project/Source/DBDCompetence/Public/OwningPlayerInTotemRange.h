#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInTotemRange.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UOwningPlayerInTotemRange();
};

FORCEINLINE uint32 GetTypeHash(const UOwningPlayerInTotemRange) { return 0; }
