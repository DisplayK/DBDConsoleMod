#pragma once

#include "CoreMinimal.h"
#include "SimplygonOpacityCaster.h"
#include "OpacityMaskCaster.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UOpacityMaskCaster : public USimplygonOpacityCaster
{
	GENERATED_BODY()

public:
	UOpacityMaskCaster();
};

FORCEINLINE uint32 GetTypeHash(const UOpacityMaskCaster) { return 0; }
