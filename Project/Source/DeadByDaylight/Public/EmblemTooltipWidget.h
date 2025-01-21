#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "EmblemTooltipWidget.generated.h"

class UUMGTallyEmblemProgressionWidget;
class UTextBlock;
class UImage;
class UVerticalBox;
class UUMGTallyEmblemProgressBar;

UCLASS(Abstract, EditInlineNew)
class UEmblemTooltipWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* HeaderBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* SubTitleLabel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* HeaderSmoke;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UVerticalBox* DataContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTallyEmblemProgressBar* TallyEmblemProgressBar;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGTallyEmblemProgressionWidget> ProgressionDataWidgetClass;

public:
	UEmblemTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEmblemTooltipWidget) { return 0; }
