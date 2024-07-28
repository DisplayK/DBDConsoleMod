#pragma once

#include "CoreMinimal.h"
#include "ChainsawEvent.h"
#include "ChainsawHitWithPowerCharge.h"
#include "ChainsawAnalytics.h"
#include "CannibalAnalytics.generated.h"

USTRUCT()
struct FCannibalAnalytics: public FChainsawAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FChainsawHitWithPowerCharge> HitWithPowerChargeEvents;

	UPROPERTY(Transient)
	TArray<FChainsawEvent> RevToTantrumEvents;

public:
	THECANNIBAL_API FCannibalAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCannibalAnalytics) { return 0; }
