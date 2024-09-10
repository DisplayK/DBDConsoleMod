#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ArchiveRewardNodeTooltipWidget.generated.h"

class UCustomizationTooltipWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UArchiveRewardNodeTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCustomizationTooltipWidget* CustomizationTooltip;

public:
	UArchiveRewardNodeTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveRewardNodeTooltipWidget) { return 0; }
