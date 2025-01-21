#pragma once

#include "CoreMinimal.h"
#include "BloodwebRingComposition.generated.h"

USTRUCT()
struct FBloodwebRingComposition
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 EntityStartingRound;

	UPROPERTY()
	TArray<int32> NodeCountPerRing;

public:
	DEADBYDAYLIGHT_API FBloodwebRingComposition();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebRingComposition) { return 0; }
