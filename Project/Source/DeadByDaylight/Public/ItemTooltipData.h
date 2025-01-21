#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "ItemTooltipData.generated.h"

USTRUCT()
struct FItemTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FItemTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FItemTooltipData) { return 0; }
