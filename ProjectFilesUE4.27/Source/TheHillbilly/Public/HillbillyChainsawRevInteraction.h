#pragma once

#include "CoreMinimal.h"
#include "ChainsawRevInteraction.h"
#include "HillbillyChainsawRevInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHillbillyChainsawRevInteraction : public UChainsawRevInteraction
{
	GENERATED_BODY()

public:
	UHillbillyChainsawRevInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawRevInteraction) { return 0; }
