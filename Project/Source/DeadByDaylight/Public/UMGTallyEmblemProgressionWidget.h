#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGTallyEmblemProgressionWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyEmblemProgressionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PositiveIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* NegativeIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* PercentText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* DescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor WarningPercentColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor WarningDescriptionColor;

public:
	UUMGTallyEmblemProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyEmblemProgressionWidget) { return 0; }
