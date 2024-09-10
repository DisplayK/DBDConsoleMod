#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "LabelTooltipWidget.generated.h"

class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API ULabelTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LabelRTB;

public:
	UFUNCTION()
	void SetTooltipData(const FText& labelText);

	UFUNCTION()
	void Reset();

public:
	ULabelTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULabelTooltipWidget) { return 0; }
