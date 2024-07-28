#pragma once

#include "CoreMinimal.h"
#include "SimplygonOpacityCaster.h"
#include "OpacityCaster.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UOpacityCaster : public USimplygonOpacityCaster
{
	GENERATED_BODY()

public:
	UOpacityCaster();
};

FORCEINLINE uint32 GetTypeHash(const UOpacityCaster) { return 0; }
