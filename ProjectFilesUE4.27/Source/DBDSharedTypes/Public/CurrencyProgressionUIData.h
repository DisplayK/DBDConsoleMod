#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CurrencyProgressionUIData.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCurrencyProgressionUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText TooltipTitle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText TooltipDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> RewardIcon;

public:
	DBDSHAREDTYPES_API FCurrencyProgressionUIData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyProgressionUIData) { return 0; }
