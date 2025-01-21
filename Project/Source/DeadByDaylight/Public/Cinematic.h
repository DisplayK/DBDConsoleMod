#pragma once

#include "CoreMinimal.h"
#include "Cinematic.generated.h"

USTRUCT(BlueprintType)
struct FCinematic
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FCinematic();
};

FORCEINLINE uint32 GetTypeHash(const FCinematic) { return 0; }
