#include "CoreArchiveRiftWidget.h"

class UCoreButtonWidget;
class UUITweenInstance;

void UCoreArchiveRiftWidget::OnRewardItemClicked(int32 tier, UCoreButtonWidget* button, bool isPremium, int32 index)
{

}

void UCoreArchiveRiftWidget::OnRewardAnimationCompleted()
{

}

void UCoreArchiveRiftWidget::OnPreviousButtonClicked()
{

}

void UCoreArchiveRiftWidget::OnOutfitButtonUnhovered(UCoreButtonWidget* button)
{

}

void UCoreArchiveRiftWidget::OnOutfitButtonHovered(UCoreButtonWidget* button)
{

}

void UCoreArchiveRiftWidget::OnOutfitButtonClicked(UCoreButtonWidget* button)
{

}

void UCoreArchiveRiftWidget::OnNextButtonClicked()
{

}

void UCoreArchiveRiftWidget::OnCurrentPageAnimationCompleted()
{

}

void UCoreArchiveRiftWidget::DisplayPage(UUITweenInstance* tween)
{

}

UCoreArchiveRiftWidget::UCoreArchiveRiftWidget()
{
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->_riftTiersData = TArray<FArchiveRiftTierRewardsViewData>();
	this->_currentPage = 0;
	this->_maxTierItemsPerPage = 8;
	this->_animationItemDelay = 0.200000;
	this->_animationPremiumTrackDelay = 0.800000;
	this->_pageSwitchFadeDuration = 0.150000;
	this->_pageSwitchFadeTweenEasing = EEasingType::Linear;
	this->_archiveRiftTierItemClass = NULL;
	this->_freePurchaseButtonText = FText::GetEmpty();
	this->_freePurchaseDescriptionText = FText::GetEmpty();
	this->_premiumPurchaseButtonText = FText::GetEmpty();
	this->_premiumPurchaseDescriptionText = FText::GetEmpty();
	this->_maxTierText = FText::GetEmpty();
	this->_currentProgressInfoText = FText::GetEmpty();
	this->OutfitButton = NULL;
	this->PurchaseButton = NULL;
	this->RewardGrid = NULL;
	this->TierInfoDescriptionRTB = NULL;
	this->TierInfoTopTB = NULL;
	this->TierInfoBottomTB = NULL;
	this->FreeTrackLabelTB = NULL;
	this->PremiumTrackLabelTB = NULL;
	this->PaginationTB = NULL;
	this->PaginationPreviousButton = NULL;
	this->PaginationNextButton = NULL;
	this->_tierItemPool = TArray<UCoreArchiveRiftTierItem*>();
	this->_contentVisbilityTween = NULL;
	this->_pageSwitchVisbilityTween = NULL;
	this->_currentSelectedReward = NULL;
}
