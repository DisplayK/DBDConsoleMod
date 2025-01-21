#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualDifficulty.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualDifficulty
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float Threshold;

	UPROPERTY()
	float Tolerance;

	UPROPERTY()
	float DisplayThreshold;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualDifficulty();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualDifficulty) { return 0; }
