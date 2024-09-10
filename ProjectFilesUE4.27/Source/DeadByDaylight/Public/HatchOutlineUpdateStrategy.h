#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "HatchOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHatchOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UHatchOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UHatchOutlineUpdateStrategy) { return 0; }
