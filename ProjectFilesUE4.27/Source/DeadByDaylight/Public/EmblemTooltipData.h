#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "EmblemSlotData.h"
#include "EmblemTooltipData.generated.h"

USTRUCT()
struct FEmblemTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FEmblemSlotData EmblemSlotData;

public:
	DEADBYDAYLIGHT_API FEmblemTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemTooltipData) { return 0; }
