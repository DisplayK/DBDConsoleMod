#pragma once

#include "CoreMinimal.h"
#include "CoreRitualsTunables.h"
#include "CoreRitualsEntry.h"
#include "CoreRitualsContent.generated.h"

USTRUCT()
struct FCoreRitualsContent
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FCoreRitualsTunables Config;

	UPROPERTY()
	TArray<FCoreRitualsEntry> Data;

public:
	DEADBYDAYLIGHT_API FCoreRitualsContent();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRitualsContent) { return 0; }
