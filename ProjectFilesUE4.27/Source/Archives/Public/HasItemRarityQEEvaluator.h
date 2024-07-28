#pragma once

#include "CoreMinimal.h"
#include "ItemRarityQEEvaluator.h"
#include "HasItemRarityQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UHasItemRarityQEEvaluator : public UItemRarityQEEvaluator
{
	GENERATED_BODY()

public:
	UHasItemRarityQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemRarityQEEvaluator) { return 0; }
