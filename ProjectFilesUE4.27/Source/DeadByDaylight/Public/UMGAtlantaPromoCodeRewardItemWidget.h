#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaPromoCodeRewardItemWidget.generated.h"

class UPanelWidget;
class UWidgetAnimation;
class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlantaPromoCodeRewardItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* CurrencyItem;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CurrencyIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CurrencyName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CurrencyAmount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ItemRarityTint;

	UPROPERTY()
	UWidgetAnimation* RevealAnimationSmall;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* CustomizationItem;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CustomizationIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CustomizationName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CustomizationRarityTint;

	UPROPERTY()
	UWidgetAnimation* RevealAnimationLarge;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* CharacterPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CharacterPortrait;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* CharacterName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* TicketPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* TicketRarityTint;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* TicketIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TicketName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TicketAmount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* OfferingPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* OfferingRarityTint;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* OfferingIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* OfferingName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* OfferingAmount;

public:
	UUMGAtlantaPromoCodeRewardItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaPromoCodeRewardItemWidget) { return 0; }
