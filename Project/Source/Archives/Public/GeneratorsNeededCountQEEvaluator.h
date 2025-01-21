#pragma once

#include "CoreMinimal.h"
#include "EndOfGameQEEvaluator.h"
#include "GeneratorsNeededCountQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UGeneratorsNeededCountQEEvaluator : public UEndOfGameQEEvaluator
{
	GENERATED_BODY()

public:
	UGeneratorsNeededCountQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorsNeededCountQEEvaluator) { return 0; }
