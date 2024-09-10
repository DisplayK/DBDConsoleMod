#pragma once

#include "CoreMinimal.h"
#include "BloodwebRarityCost.h"
#include "BloodwebEventChestProbability.h"
#include "BloodwebRingComposition.h"
#include "BloodwebTypeCostModifiers.h"
#include "BloodwebChestProbability.h"
#include "BloodwebGenerationRulesData.generated.h"

USTRUCT()
struct FBloodwebGenerationRulesData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FBloodwebRingComposition> RingComposition;

	UPROPERTY()
	FBloodwebRarityCost RarityCost;

	UPROPERTY()
	FBloodwebTypeCostModifiers TypeCostModifiers;

	UPROPERTY()
	TArray<FBloodwebChestProbability> ChestProbability;

	UPROPERTY()
	TArray<FBloodwebEventChestProbability> EventChestProbability;

public:
	DEADBYDAYLIGHT_API FBloodwebGenerationRulesData();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebGenerationRulesData) { return 0; }
