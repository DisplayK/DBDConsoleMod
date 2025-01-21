#pragma once

#include "CoreMinimal.h"
#include "InstigatorInBasementQEEvaluator.h"
#include "InstigatorInBasementPercentQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UInstigatorInBasementPercentQEEvaluator : public UInstigatorInBasementQEEvaluator
{
	GENERATED_BODY()

public:
	UInstigatorInBasementPercentQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UInstigatorInBasementPercentQEEvaluator) { return 0; }
