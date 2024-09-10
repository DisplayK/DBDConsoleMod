#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UMGBaseButtonWidget.h"
#include "OnIntegerIntegerGenericEvent.h"
#include "EUMGDailyRewardWidgetState.h"
#include "UMGDailyRewardWidget.generated.h"

class UImage;
class UWidgetSwitcher;
class UTextBlock;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGDailyRewardWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FOnIntegerIntegerGenericEvent OnDailyRewardStateChanged;

protected:
	UPROPERTY(BlueprintReadOnly)
	bool IsMarkedSpecial;

	UPROPERTY(BlueprintReadOnly)
	EUMGDailyRewardWidgetState State;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* AmountText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* ItemNameText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* RewardNumberText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* RewardTypeSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ItemInfoPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* OfferingInfoPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* GenericInfoPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* FreeTicketInfoPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* CrateKeyInfoPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ItemIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* OfferingIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* GenericRewardIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* FreeTicketRewardIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ParentItemIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CrateKeyRewardIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ParentItemPanel;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void StopIdleAnimationForState(const EUMGDailyRewardWidgetState inState);

	UFUNCTION(BlueprintImplementableEvent)
	void SetStateVisuals(const EUMGDailyRewardWidgetState inState);

	UFUNCTION(BlueprintImplementableEvent)
	void SetRarityColors(FColor backgroundColor, FColor tintColor);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayIdleAnimationForState(const EUMGDailyRewardWidgetState inState);

	UFUNCTION(BlueprintCallable)
	void HandleUnlockRewardAnimationFinished();

	UFUNCTION(BlueprintCallable)
	void HandleUnlockMysteryRewardAnimationFinished();

	UFUNCTION(BlueprintCallable)
	void HandleDiscoverRewardAnimationFinished();

	UFUNCTION(BlueprintCallable)
	void HandleCollectRewardAnimationFinished();

	UFUNCTION(BlueprintCallable)
	void HandleCollectButtonClick();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DiscoverMysteryReward();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CollectReward();

public:
	UUMGDailyRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGDailyRewardWidget) { return 0; }
