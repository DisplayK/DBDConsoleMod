#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSelectionSlotWidget.generated.h"

class UTextBlock;
class UPerkActionButton;
class UUMGHtmlRichText;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UPerkSelectionSlotWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* PerkName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextChoose;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPerkActionButton* PerkActionButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* SelectedIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGHtmlRichText* DescriptionText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PictureBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PicturePerkBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PictureHighlightFrame;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PictureTopRightBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PictureTopRightFrame;

	UPROPERTY(EditDefaultsOnly)
	float HighOpacity;

	UPROPERTY(EditDefaultsOnly)
	float LowOpacity;

	UPROPERTY(EditDefaultsOnly)
	float PerkBackgroundLowOpacity;

	UPROPERTY(EditDefaultsOnly)
	float DescriptionBackgroundLowOpacity;

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonClicked();

public:
	UPerkSelectionSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UPerkSelectionSlotWidget) { return 0; }
