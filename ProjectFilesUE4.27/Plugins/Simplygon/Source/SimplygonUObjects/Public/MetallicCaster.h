#pragma once

#include "CoreMinimal.h"
#include "BaseColorCaster.h"
#include "MetallicCaster.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UMetallicCaster : public UBaseColorCaster
{
	GENERATED_BODY()

public:
	UMetallicCaster();
};

FORCEINLINE uint32 GetTypeHash(const UMetallicCaster) { return 0; }
