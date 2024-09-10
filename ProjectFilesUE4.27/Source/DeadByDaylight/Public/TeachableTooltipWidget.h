#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "TeachableTooltipWidget.generated.h"

class UTextBlock;
class UUMGHtmlRichText;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UTeachableTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* SubTitleLabel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* HeaderSmoke;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* EffectText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* AvailabilityText;

public:
	UTeachableTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UTeachableTooltipWidget) { return 0; }
