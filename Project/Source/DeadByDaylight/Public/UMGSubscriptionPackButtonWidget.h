#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGSubscriptionPackButtonWidget.generated.h"

class UTextBlock;
class UCanvasPanel;
class USubscriptionRewardDataAsset;
class UButton;
class UImage;
class UUniformGridPanel;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGSubscriptionPackButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	USubscriptionRewardDataAsset* WidgetPerRewardType;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ButtonPressedVFX;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* PricePanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* TitleIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Title;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Price;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* RenewalDatePanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* RenewalDateText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUniformGridPanel* PurchaseRewardsGrid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUniformGridPanel* DailyRewardsGrid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PortraitBorder;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* InfoButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ActiveBackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* NonActiveBackgroundImage;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor ActiveTextColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor NonActiveTextColor;

	UPROPERTY(BlueprintReadOnly)
	FLinearColor TextColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor ActiveSmokeBackgroundTint;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor NonActiveSmokeBackgroundTint;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* PurchaseRewardsSmokeBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* DailyRewardsSmokeBackground;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor ActiveTitleBackgroundTint;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor NonActiveTitleBackgroundTint;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* TitleBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ActiveFrame;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* NonActiveFrame;

private:
	UFUNCTION(BlueprintCallable)
	void OnInfoButtonClicked();

public:
	UUMGSubscriptionPackButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSubscriptionPackButtonWidget) { return 0; }
