#pragma once

#include "CoreMinimal.h"
#include "K30ApplyStatusOnWakeUpAddon.h"
#include "K30Addon16.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30Addon16 : public UK30ApplyStatusOnWakeUpAddon
{
	GENERATED_BODY()

public:
	UK30Addon16();
};

FORCEINLINE uint32 GetTypeHash(const UK30Addon16) { return 0; }
