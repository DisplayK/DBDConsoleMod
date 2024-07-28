#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "RewardLayoutWidgetToGenerate.h"
#include "UMGRewardPopupLayout.generated.h"

class UHorizontalBox;
class UUMGRewardSlotTutorialPopupRewardWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGRewardPopupLayout : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* TopHorizontalBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* BottomHorizontalBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRewardSlotTutorialPopupRewardWidget* FirstCharacter;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRewardSlotTutorialPopupRewardWidget* SecondCharacter;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRewardSlotTutorialPopupRewardWidget* ThirdCharacter;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRewardSlotTutorialPopupRewardWidget* FourthCharacter;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRewardSlotTutorialPopupRewardWidget* FifthCharacter;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRewardSlotTutorialPopupRewardWidget* AuricCells;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRewardSlotTutorialPopupRewardWidget* IridescentShards;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGRewardSlotTutorialPopupRewardWidget* Bloodpoints;

	UPROPERTY(EditDefaultsOnly)
	FRewardLayoutWidgetToGenerate TopWidgetToGenerate;

	UPROPERTY(EditDefaultsOnly)
	FRewardLayoutWidgetToGenerate BottomWidgetToGenerate;

public:
	UUMGRewardPopupLayout();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRewardPopupLayout) { return 0; }
