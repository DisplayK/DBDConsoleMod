#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "CustomizationTooltipData.generated.h"

USTRUCT()
struct FCustomizationTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FCustomizationTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationTooltipData) { return 0; }
