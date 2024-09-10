#pragma once

#include "CoreMinimal.h"
#include "CoreRitualsTunables.generated.h"

USTRUCT()
struct FCoreRitualsTunables
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 MaxRituals;

public:
	DEADBYDAYLIGHT_API FCoreRitualsTunables();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRitualsTunables) { return 0; }
