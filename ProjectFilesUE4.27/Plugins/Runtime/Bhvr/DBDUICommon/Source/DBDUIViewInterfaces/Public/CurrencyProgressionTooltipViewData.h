#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CurrencyExpirationLabelViewData.h"
#include "CurrencyProgressionTooltipViewData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCurrencyProgressionTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FCurrencyExpirationLabelViewData> ExpirationData;

public:
	DBDUIVIEWINTERFACES_API FCurrencyProgressionTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyProgressionTooltipViewData) { return 0; }
