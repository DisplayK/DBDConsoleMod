#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "BaseTooltipWidget.generated.h"

class UTextBlock;
class UButton;
class UCanvasPanel;
class UUMGHtmlRichText;
class UAkAudioEvent;

UCLASS(Abstract, EditInlineNew)
class UBaseTooltipWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TitleLabel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* TooltipContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* DescriptionLabel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* CloseButton;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* TooltipOpeningSound;

protected:
	UFUNCTION()
	void OnQuitButtonClicked();

public:
	UBaseTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UBaseTooltipWidget) { return 0; }
