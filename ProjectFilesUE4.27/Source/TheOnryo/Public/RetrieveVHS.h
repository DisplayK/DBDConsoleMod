#pragma once

#include "CoreMinimal.h"
#include "SurvivorTelevisionInteraction.h"
#include "RetrieveVHS.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class URetrieveVHS : public USurvivorTelevisionInteraction
{
	GENERATED_BODY()

public:
	URetrieveVHS();
};

FORCEINLINE uint32 GetTypeHash(const URetrieveVHS) { return 0; }
