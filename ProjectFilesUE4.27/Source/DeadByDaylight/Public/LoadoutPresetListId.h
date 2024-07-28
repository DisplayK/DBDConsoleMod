#pragma once

#include "CoreMinimal.h"
#include "LoadoutPresetListId.generated.h"

USTRUCT()
struct FLoadoutPresetListId
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FLoadoutPresetListId();
};

FORCEINLINE uint32 GetTypeHash(const FLoadoutPresetListId) { return 0; }
