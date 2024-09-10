#pragma once

#include "CoreMinimal.h"
#include "UMGBaseCurrencyStorefrontWidget.h"
#include "Layout/Margin.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlCurrencyStorefrontWidget.generated.h"

class UHorizontalBox;
class UCanvasPanel;
class URichTextBlock;
class UUniformGridPanel;
class UOverlay;
class UUMGStoreEventItemsPackButton;
class UImage;
class UUMGStoreAuricCellButton;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlCurrencyStorefrontWidget : public UUMGBaseCurrencyStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* AuricCellsCanvasPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUniformGridPanel* AuricCellsGridPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* BottomPurchaseBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	URichTextBlock* BottomRightPurchaseRichText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UOverlay* BottomTimer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* AuricsBgR;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* AuricsBgL;

private:
	UPROPERTY(Export)
	UHorizontalBox* EventItemsPackContainerBox;

	UPROPERTY(EditDefaultsOnly)
	FMargin PaddingEventItemsPackButton;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGStoreEventItemsPackButton> EventItemsPackWidgetClass;

	UPROPERTY(Transient, Export)
	TArray<UUMGStoreAuricCellButton*> _auricCellButtons;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateFirstPurchaseForAllAuricCellsEndInUI(const FString& endInText);

public:
	UUMGAtlCurrencyStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlCurrencyStorefrontWidget) { return 0; }
