#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlashlightableLightingStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDGAMEPLAY_API UFlashlightableLightingStrategy : public UObject
{
	GENERATED_BODY()

public:
	UFlashlightableLightingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightableLightingStrategy) { return 0; }
