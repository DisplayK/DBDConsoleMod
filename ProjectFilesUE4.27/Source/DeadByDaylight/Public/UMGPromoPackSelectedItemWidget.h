#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPromoPackSelectedItemWidget.generated.h"

class UNamedSlot;
class UImage;
class UUMGHtmlRichText;
class UUMGPromoPackItemWidget;
class UTextBlock;
class UScrollBox;

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackSelectedItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* ItemDescription;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ItemTypeIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* ItemName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* ItemSubtitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UNamedSlot* SelectedItemSlot;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UUMGPromoPackItemWidget* SelectedItem;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScrollBox* ScrollBox;

public:
	UUMGPromoPackSelectedItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackSelectedItemWidget) { return 0; }
