#pragma once

#include "CoreMinimal.h"
#include "ArchiveRiftViewInterface.h"
#include "ETooltipVerticalAlignment.h"
#include "CoreTabContentWidget.h"
#include "ETooltipHorizontalAlignment.h"
#include "ArchiveRiftOnRewardCurrencyClicked.h"
#include "ArchiveRiftOnRewardItemClicked.h"
#include "ArchivesRiftGenericViewData.h"
#include "ArchiveRiftTierRewardsViewData.h"
#include "ArchiveRiftOnPurchasePremiumPassClicked.h"
#include "ArchiveRiftOnPurchaseTierClicked.h"
#include "ArchiveRiftOnOutfitClicked.h"
#include "ArchiveRiftOnBonusTierTooltipShown.h"
#include "EEasingType.h"
#include "Templates/SubclassOf.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "ETierType.h"
#include "CoreArchiveRiftWidget.generated.h"

class UHorizontalBox;
class UCoreSelectableButtonWidget;
class UCoreToggleButtonWidget;
class UCoreArchiveRiftTierItem;
class UDBDTextBlock;
class UCoreInputSwitcherWidget;
class UDBDRichTextBlock;
class UUITweenInstance;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveRiftWidget : public UCoreTabContentWidget, public IArchiveRiftViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

protected:
	UPROPERTY()
	FArchiveRiftOnRewardItemClicked _rewardItemClickedDelegate;

	UPROPERTY()
	FArchiveRiftOnRewardCurrencyClicked _rewardCurrencyClickedDelegate;

	UPROPERTY()
	FArchiveRiftOnPurchasePremiumPassClicked _purchasePremiumPassClickedDelegate;

	UPROPERTY()
	FArchiveRiftOnPurchaseTierClicked _purchaseTierClickedDelegate;

	UPROPERTY()
	FArchiveRiftOnOutfitClicked _outfitClickedDelegate;

	UPROPERTY()
	FArchiveRiftOnBonusTierTooltipShown _bonusTierShownDelegate;

	UPROPERTY(BlueprintReadOnly, Transient)
	FArchivesRiftGenericViewData _genericData;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FArchiveRiftTierRewardsViewData> _riftTiersData;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 _currentPage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	int32 _maxTierItemsPerPage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _animationItemDelay;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _animationPremiumTrackDelay;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _pageSwitchFadeDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	EEasingType _pageSwitchFadeTweenEasing;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UCoreArchiveRiftTierItem> _archiveRiftTierItemClass;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText _freePurchaseButtonText;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText _freePurchaseDescriptionText;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText _premiumPurchaseButtonText;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText _premiumPurchaseDescriptionText;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText _maxTierText;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText _currentProgressInfoText;

	UPROPERTY(BlueprintReadWrite, Transient)
	FCurrencyProgressionTooltipViewData _riftFragmentTooltipViewData;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreToggleButtonWidget* OutfitButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* PurchaseButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* RewardGrid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* TierInfoDescriptionRTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TierInfoTopTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TierInfoBottomTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* FreeTrackLabelTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* PremiumTrackLabelTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* PaginationTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* PaginationPreviousButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* PaginationNextButton;

private:
	UPROPERTY(Transient, Export)
	TArray<UCoreArchiveRiftTierItem*> _tierItemPool;

	UPROPERTY(Transient)
	UUITweenInstance* _contentVisbilityTween;

	UPROPERTY(Transient)
	UUITweenInstance* _pageSwitchVisbilityTween;

	UPROPERTY(Transient, Export)
	UCoreSelectableButtonWidget* _currentSelectedReward;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetVisualData(const FArchivesRiftGenericViewData& data);

	UFUNCTION(BlueprintImplementableEvent)
	void SetTierVisuals(ETierType tierType);

	UFUNCTION(BlueprintImplementableEvent)
	void SetPaginationVisuals(const bool showBonusTierHighlight, const FText& bonusTierTooltipText);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayPremiumTrackUnlockAnimation();

private:
	UFUNCTION()
	void OnRewardItemClicked(int32 tier, UCoreButtonWidget* button, bool isPremium, int32 index);

	UFUNCTION()
	void OnRewardAnimationCompleted();

	UFUNCTION()
	void OnPreviousButtonClicked();

	UFUNCTION()
	void OnOutfitButtonUnhovered(UCoreButtonWidget* button);

	UFUNCTION()
	void OnOutfitButtonHovered(UCoreButtonWidget* button);

	UFUNCTION()
	void OnOutfitButtonClicked(UCoreButtonWidget* button);

	UFUNCTION()
	void OnNextButtonClicked();

	UFUNCTION()
	void OnCurrentPageAnimationCompleted();

	UFUNCTION()
	void DisplayPage(UUITweenInstance* tween);

public:
	UCoreArchiveRiftWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveRiftWidget) { return 0; }
