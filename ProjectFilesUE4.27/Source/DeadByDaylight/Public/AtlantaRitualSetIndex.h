#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualSetIndex.generated.h"

USTRUCT()
struct FAtlantaRitualSetIndex
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 index;

	UPROPERTY()
	FString ritualType;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualSetIndex();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualSetIndex) { return 0; }
