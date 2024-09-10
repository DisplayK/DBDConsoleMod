#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "AtlantaCustomizationTooltipWidget.generated.h"

class UImage;
class UUMGCustomizationTooltipContentWidget;
class UUMGCustomizationTooltipHeaderWidget;

UCLASS(Abstract, EditInlineNew)
class UAtlantaCustomizationTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* SmokeImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCustomizationTooltipHeaderWidget* Header;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCustomizationTooltipContentWidget* Content;

public:
	UAtlantaCustomizationTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaCustomizationTooltipWidget) { return 0; }
