#pragma once

#include "CoreMinimal.h"
#include "EOfferingSequenceState.h"
#include "OfferingRevealDelays.generated.h"

USTRUCT(BlueprintType)
struct FOfferingRevealDelays
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOfferingSequenceState RevealState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Delay;

public:
	DEADBYDAYLIGHT_API FOfferingRevealDelays();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingRevealDelays) { return 0; }
