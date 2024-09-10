#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CurrencyLabelViewData.h"
#include "CoreCurrencyLabelWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCurrencyLabelWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateCurrency(int32 newBalance, int32 previousBalance);

	UFUNCTION(BlueprintImplementableEvent)
	void SetData(const FCurrencyLabelViewData& viewData);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayNotEnoughCurrency();

public:
	UCoreCurrencyLabelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyLabelWidget) { return 0; }
