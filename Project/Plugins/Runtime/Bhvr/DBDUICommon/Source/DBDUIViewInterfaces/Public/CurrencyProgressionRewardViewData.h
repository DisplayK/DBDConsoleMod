#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "RewardViewData.h"
#include "ECurrencyType.h"
#include "EProgressionType.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CurrencyProgressionRewardViewData.generated.h"

class UTexture2D;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCurrencyProgressionRewardViewData: public FRewardViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EProgressionType ProgressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> RewardIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCurrencyProgressionTooltipViewData TooltipData;

public:
	DBDUIVIEWINTERFACES_API FCurrencyProgressionRewardViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyProgressionRewardViewData) { return 0; }
