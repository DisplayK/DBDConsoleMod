#pragma once

#include "CoreMinimal.h"
#include "SurvivorTelevisionInteraction.h"
#include "InsertVHS.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInsertVHS : public USurvivorTelevisionInteraction
{
	GENERATED_BODY()

public:
	UInsertVHS();
};

FORCEINLINE uint32 GetTypeHash(const UInsertVHS) { return 0; }
