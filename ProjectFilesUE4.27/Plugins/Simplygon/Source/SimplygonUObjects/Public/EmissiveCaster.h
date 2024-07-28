#pragma once

#include "CoreMinimal.h"
#include "BaseColorCaster.h"
#include "EmissiveCaster.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UEmissiveCaster : public UBaseColorCaster
{
	GENERATED_BODY()

public:
	UEmissiveCaster();
};

FORCEINLINE uint32 GetTypeHash(const UEmissiveCaster) { return 0; }
