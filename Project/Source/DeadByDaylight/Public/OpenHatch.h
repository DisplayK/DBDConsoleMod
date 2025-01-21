#pragma once

#include "CoreMinimal.h"
#include "BaseEscapeThroughHatch.h"
#include "OpenHatch.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOpenHatch : public UBaseEscapeThroughHatch
{
	GENERATED_BODY()

public:
	UOpenHatch();
};

FORCEINLINE uint32 GetTypeHash(const UOpenHatch) { return 0; }
