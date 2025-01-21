#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "K30RepeatGuardSpawnAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30RepeatGuardSpawnAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	uint8 _guardIndexToRepeat;

public:
	UK30RepeatGuardSpawnAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30RepeatGuardSpawnAddon) { return 0; }
