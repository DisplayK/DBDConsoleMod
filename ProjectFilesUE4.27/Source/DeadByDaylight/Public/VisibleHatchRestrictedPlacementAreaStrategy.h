#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "VisibleHatchRestrictedPlacementAreaStrategy.generated.h"

UCLASS(EditInlineNew)
class UVisibleHatchRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

public:
	UVisibleHatchRestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UVisibleHatchRestrictedPlacementAreaStrategy) { return 0; }
