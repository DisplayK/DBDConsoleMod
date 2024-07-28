#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "HillbillyChainsawHitEventAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHillbillyChainsawHitEventAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

public:
	UHillbillyChainsawHitEventAddon();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawHitEventAddon) { return 0; }
