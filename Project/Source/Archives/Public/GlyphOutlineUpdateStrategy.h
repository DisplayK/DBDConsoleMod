#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "GlyphOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGlyphOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UGlyphOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UGlyphOutlineUpdateStrategy) { return 0; }
