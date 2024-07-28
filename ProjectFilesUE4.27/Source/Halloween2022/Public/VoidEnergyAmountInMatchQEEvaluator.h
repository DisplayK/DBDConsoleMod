#pragma once

#include "CoreMinimal.h"
#include "VoidEnergyChangeQEEvaluator.h"
#include "VoidEnergyAmountInMatchQEEvaluator.generated.h"

UCLASS()
class UVoidEnergyAmountInMatchQEEvaluator : public UVoidEnergyChangeQEEvaluator
{
	GENERATED_BODY()

public:
	UVoidEnergyAmountInMatchQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyAmountInMatchQEEvaluator) { return 0; }
