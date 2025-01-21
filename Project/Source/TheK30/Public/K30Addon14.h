#pragma once

#include "CoreMinimal.h"
#include "K30InflictStatusOnEndHuntAddon.h"
#include "K30Addon14.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30Addon14 : public UK30InflictStatusOnEndHuntAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	int32 _numberOfEscapesBeforeEffect;

public:
	UK30Addon14();
};

FORCEINLINE uint32 GetTypeHash(const UK30Addon14) { return 0; }
