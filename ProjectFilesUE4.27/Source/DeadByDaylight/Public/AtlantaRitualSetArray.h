#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualSet.h"
#include "AtlantaRitualSetArray.generated.h"

USTRUCT()
struct FAtlantaRitualSetArray
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FAtlantaRitualSet> rituals;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualSetArray();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualSetArray) { return 0; }
