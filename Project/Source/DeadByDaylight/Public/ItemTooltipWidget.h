#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "ItemTooltipWidget.generated.h"

class UTextBlock;
class UImage;
class UUMGHtmlRichText;

UCLASS(Abstract, EditInlineNew)
class UItemTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* RarityLabel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* WarningText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* HeaderSmoke;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* HeaderBackground;

public:
	UItemTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UItemTooltipWidget) { return 0; }
