#pragma once

#include "CoreMinimal.h"
#include "UMGMonthlyPassRewardItemWidget.h"
#include "UMGMonthlyPassCurrencyWidget.generated.h"

class UImage;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMonthlyPassCurrencyWidget : public UUMGMonthlyPassRewardItemWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CurrencyBackground;

public:
	UUMGMonthlyPassCurrencyWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMonthlyPassCurrencyWidget) { return 0; }
