#pragma once

#include "CoreMinimal.h"
#include "ItemPerformedQEEvaluator.h"
#include "ItemPerformedPercentQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UItemPerformedPercentQEEvaluator : public UItemPerformedQEEvaluator
{
	GENERATED_BODY()

public:
	UItemPerformedPercentQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UItemPerformedPercentQEEvaluator) { return 0; }
