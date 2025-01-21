#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "ECurrencyType.h"
#include "UMGRitualRefreshButton.generated.h"

class UCanvasPanel;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRitualRefreshButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* RefreshCanvas;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* RefreshSwitcher;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRefreshButton(int32 currency, ECurrencyType currentyType, bool isAdsRefresh);

public:
	UUMGRitualRefreshButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRitualRefreshButton) { return 0; }
