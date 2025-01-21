#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualEvaluatorBase.h"
#include "AtlantaRitualEvaluatorInvalid.generated.h"

UCLASS()
class UAtlantaRitualEvaluatorInvalid : public UAtlantaRitualEvaluatorBase
{
	GENERATED_BODY()

public:
	UAtlantaRitualEvaluatorInvalid();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaRitualEvaluatorInvalid) { return 0; }
