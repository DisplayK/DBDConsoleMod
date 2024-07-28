#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPromoPackSuggestionButton.generated.h"

class URichTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPromoPackSuggestionButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	URichTextBlock* RichTextButtonLabel;

	UPROPERTY(meta=(BindWidgetOptional))
	UImage* LineGlow;

public:
	UUMGPromoPackSuggestionButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackSuggestionButton) { return 0; }
