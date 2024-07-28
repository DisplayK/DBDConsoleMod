#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaEventsDescription.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UUMGAtlantaBaseEventsTemplate;
class UAtlantaEventsTemplateDataAsset;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaEventsDescription : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	UAtlantaEventsTemplateDataAsset* widgetData;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ItemsRewards;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Title;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Description;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TimePeriodTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TimePeriodStart;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TimePeriodEnd;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* DeepLinkButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* TimePeriodCanvas;

private:
	UPROPERTY(Transient, Export)
	UUMGAtlantaBaseEventsTemplate* _eventTemplate;

private:
	UFUNCTION()
	void HandleButtonClicked();

public:
	UUMGAtlantaEventsDescription();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaEventsDescription) { return 0; }
