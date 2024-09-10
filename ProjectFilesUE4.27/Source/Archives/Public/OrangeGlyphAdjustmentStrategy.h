#pragma once

#include "CoreMinimal.h"
#include "SpecialBehaviourIterativeWeightAdjustmentStrategy.h"
#include "OrangeGlyphAdjustmentStrategy.generated.h"

UCLASS()
class UOrangeGlyphAdjustmentStrategy : public USpecialBehaviourIterativeWeightAdjustmentStrategy
{
	GENERATED_BODY()

public:
	UOrangeGlyphAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UOrangeGlyphAdjustmentStrategy) { return 0; }
