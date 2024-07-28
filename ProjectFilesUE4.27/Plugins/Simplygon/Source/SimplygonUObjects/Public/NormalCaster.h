#pragma once

#include "CoreMinimal.h"
#include "SimplygonNormalCaster.h"
#include "NormalCaster.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UNormalCaster : public USimplygonNormalCaster
{
	GENERATED_BODY()

public:
	UNormalCaster();
};

FORCEINLINE uint32 GetTypeHash(const UNormalCaster) { return 0; }
