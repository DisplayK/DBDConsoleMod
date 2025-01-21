#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "HasItemRarityEvaluatorCondition.generated.h"

UCLASS()
class ARCHIVES_API UHasItemRarityEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UHasItemRarityEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemRarityEvaluatorCondition) { return 0; }
