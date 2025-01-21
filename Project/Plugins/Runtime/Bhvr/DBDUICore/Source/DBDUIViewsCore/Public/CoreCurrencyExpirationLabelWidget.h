#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CurrencyExpirationLabelViewData.h"
#include "CoreCurrencyExpirationLabelWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCurrencyExpirationLabelWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FCurrencyExpirationLabelViewData& viewData);

public:
	UCoreCurrencyExpirationLabelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCurrencyExpirationLabelWidget) { return 0; }
