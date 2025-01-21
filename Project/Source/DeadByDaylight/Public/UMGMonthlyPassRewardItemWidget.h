#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGMonthlyPassRewardItemWidget.generated.h"

class UTextBlock;
class UImage;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMonthlyPassRewardItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* ItemAmount;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* ItemName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ItemIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CheckIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ItemFrame;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ItemRarityBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ItemPaintPanel;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor ActiveItemFrameColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor NonActiveItemFrameColor;

public:
	UUMGMonthlyPassRewardItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMonthlyPassRewardItemWidget) { return 0; }
