#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "DreamSnareOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDreamSnareOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UDreamSnareOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDreamSnareOutlineUpdateStrategy) { return 0; }
