#pragma once

#include "CoreMinimal.h"
#include "BloodwebChestProbability.generated.h"

USTRUCT()
struct FBloodwebChestProbability
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString ID;

	UPROPERTY()
	FString ChestRarity;

public:
	DEADBYDAYLIGHT_API FBloodwebChestProbability();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebChestProbability) { return 0; }
