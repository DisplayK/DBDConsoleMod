#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGRewardSlotTutorialPopupRewardWidget.generated.h"

class UTextBlock;
class UImage;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGRewardSlotTutorialPopupRewardWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* RewardText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* RewardPicture;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidget* UnlockedPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidget* MissedRewardPanel;

	UPROPERTY(EditDefaultsOnly)
	float RewardUnlockedTextOpacity;

	UPROPERTY(EditDefaultsOnly)
	float RewardToBeMissedTextOpacity;

public:
	UUMGRewardSlotTutorialPopupRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRewardSlotTutorialPopupRewardWidget) { return 0; }
