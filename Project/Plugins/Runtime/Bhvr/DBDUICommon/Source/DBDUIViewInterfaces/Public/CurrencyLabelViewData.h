#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ECurrencyType.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CurrencyLabelViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCurrencyLabelViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	ECurrencyType Type;

	UPROPERTY(BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool PlayBonusAnimation;

	UPROPERTY(BlueprintReadWrite, Transient)
	FCurrencyProgressionTooltipViewData TooltipData;

public:
	DBDUIVIEWINTERFACES_API FCurrencyLabelViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyLabelViewData) { return 0; }
