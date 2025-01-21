#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "ReloadKnives.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UReloadKnives : public UBaseLockerInteraction
{
	GENERATED_BODY()

public:
	UReloadKnives();
};

FORCEINLINE uint32 GetTypeHash(const UReloadKnives) { return 0; }
