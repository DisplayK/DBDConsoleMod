#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "LoadoutTooltipData.h"
#include "LoadoutTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API ULoadoutTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TooltipTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ToolTipDescriptionRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SpecialEventTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* SpecialEventDescription;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* UnlockInstructionText;

public:
	UFUNCTION()
	void SetTooltipData(const FLoadoutTooltipData& tooltipViewData);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetLoadoutTooltipPerkLevel(int32 level);

public:
	UFUNCTION()
	void Reset();

public:
	ULoadoutTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutTooltipWidget) { return 0; }
