#pragma once

#include "CoreMinimal.h"
#include "BaseColorCaster.h"
#include "SpecualarCaster.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API USpecualarCaster : public UBaseColorCaster
{
	GENERATED_BODY()

public:
	USpecualarCaster();
};

FORCEINLINE uint32 GetTypeHash(const USpecualarCaster) { return 0; }
