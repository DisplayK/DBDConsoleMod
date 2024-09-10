#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CurrencyProgressionRewardViewData.h"
#include "CoreCurrencyForTooltipsWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCurrencyForTooltipsWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FCurrencyProgressionRewardViewData& currencyRewardViewData);

public:
	UCoreCurrencyForTooltipsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyForTooltipsWidget) { return 0; }
