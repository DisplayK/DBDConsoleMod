#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "SearchableOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USearchableOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	USearchableOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USearchableOutlineUpdateStrategy) { return 0; }
