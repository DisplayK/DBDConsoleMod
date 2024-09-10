#pragma once

#include "CoreMinimal.h"
#include "BloodwebChestProbability.h"
#include "BloodwebEventChestProbability.generated.h"

USTRUCT()
struct FBloodwebEventChestProbability
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString EventId;

	UPROPERTY()
	TArray<FBloodwebChestProbability> Chests;

public:
	DEADBYDAYLIGHT_API FBloodwebEventChestProbability();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebEventChestProbability) { return 0; }
