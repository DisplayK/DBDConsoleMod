#pragma once

#include "CoreMinimal.h"
#include "BlindFlashlightableLightingStrategy.h"
#include "BrotherBlindFlashlightableLightingStrategy.generated.h"

UCLASS(EditInlineNew)
class UBrotherBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
{
	GENERATED_BODY()

public:
	UBrotherBlindFlashlightableLightingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBrotherBlindFlashlightableLightingStrategy) { return 0; }
