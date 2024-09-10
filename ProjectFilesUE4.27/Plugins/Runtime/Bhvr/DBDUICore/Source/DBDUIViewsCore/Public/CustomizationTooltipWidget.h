#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CustomizationTooltipViewData.h"
#include "CustomizationTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCustomizationTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* ToolTipStatusTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ToolTipDescriptionRTB;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetTooltipData(const FCustomizationTooltipViewData& customizationViewData);

protected:
	UFUNCTION(BlueprintCallable)
	void SetStatusText(const bool isEquipped, const bool isOwned, const bool isLocked);

public:
	UFUNCTION()
	void AppendToDescriptionText(const FText& appendedText);

public:
	UCustomizationTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationTooltipWidget) { return 0; }
