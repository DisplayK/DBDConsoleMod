#pragma once

#include "CoreMinimal.h"
#include "BloodwebTypeCostModifiers.generated.h"

USTRUCT()
struct FBloodwebTypeCostModifiers
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float AddOn;

	UPROPERTY()
	float Chest;

	UPROPERTY()
	float Items;

	UPROPERTY()
	float Offerings;

	UPROPERTY()
	float Perks;

public:
	DEADBYDAYLIGHT_API FBloodwebTypeCostModifiers();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebTypeCostModifiers) { return 0; }
