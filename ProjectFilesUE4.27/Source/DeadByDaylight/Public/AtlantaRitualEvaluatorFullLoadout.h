#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualEvaluatorBase.h"
#include "AtlantaRitualEvaluatorFullLoadout.generated.h"

UCLASS()
class UAtlantaRitualEvaluatorFullLoadout : public UAtlantaRitualEvaluatorBase
{
	GENERATED_BODY()

public:
	UAtlantaRitualEvaluatorFullLoadout();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaRitualEvaluatorFullLoadout) { return 0; }
