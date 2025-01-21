#pragma once

#include "CoreMinimal.h"
#include "ChainsawEvent.h"
#include "ChainsawHitWithPowerCharge.generated.h"

USTRUCT()
struct FChainsawHitWithPowerCharge: public FChainsawEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	int32 NumPowerCharges;

public:
	THECANNIBAL_API FChainsawHitWithPowerCharge();
};

FORCEINLINE uint32 GetTypeHash(const FChainsawHitWithPowerCharge) { return 0; }
