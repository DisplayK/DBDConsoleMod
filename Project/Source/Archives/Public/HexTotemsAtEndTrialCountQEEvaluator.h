#pragma once

#include "CoreMinimal.h"
#include "EndOfGameQEEvaluator.h"
#include "HexTotemsAtEndTrialCountQEEvaluator.generated.h"

UCLASS()
class UHexTotemsAtEndTrialCountQEEvaluator : public UEndOfGameQEEvaluator
{
	GENERATED_BODY()

public:
	UHexTotemsAtEndTrialCountQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHexTotemsAtEndTrialCountQEEvaluator) { return 0; }
