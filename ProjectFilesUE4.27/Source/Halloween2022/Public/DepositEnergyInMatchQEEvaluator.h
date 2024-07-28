#pragma once

#include "CoreMinimal.h"
#include "VoidEnergyChangeQEEvaluator.h"
#include "DepositEnergyInMatchQEEvaluator.generated.h"

UCLASS()
class UDepositEnergyInMatchQEEvaluator : public UVoidEnergyChangeQEEvaluator
{
	GENERATED_BODY()

public:
	UDepositEnergyInMatchQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UDepositEnergyInMatchQEEvaluator) { return 0; }
