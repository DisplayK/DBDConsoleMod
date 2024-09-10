#pragma once

#include "CoreMinimal.h"
#include "SimplygonColorCaster.h"
#include "BaseColorCaster.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UBaseColorCaster : public USimplygonColorCaster
{
	GENERATED_BODY()

public:
	UBaseColorCaster();
};

FORCEINLINE uint32 GetTypeHash(const UBaseColorCaster) { return 0; }
