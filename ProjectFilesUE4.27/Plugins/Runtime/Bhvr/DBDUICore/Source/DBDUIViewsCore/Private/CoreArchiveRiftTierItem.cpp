#include "CoreArchiveRiftTierItem.h"

class UCoreButtonWidget;

void UCoreArchiveRiftTierItem::OnRewardClicked(UCoreButtonWidget* button)
{

}

UCoreArchiveRiftTierItem::UCoreArchiveRiftTierItem() : UUserWidget(FObjectInitializer::Get())
{
	this->FreeRewardsContainer = NULL;
	this->PremiumRewardsContainer = NULL;
	this->_freeRewardWidgets = TArray<UCoreRewardWrapperWidget*>();
	this->_premiumRewardWidgets = TArray<UCoreRewardWrapperWidget*>();
	this->_unlockAnimationCompleteSound = NULL;
}
