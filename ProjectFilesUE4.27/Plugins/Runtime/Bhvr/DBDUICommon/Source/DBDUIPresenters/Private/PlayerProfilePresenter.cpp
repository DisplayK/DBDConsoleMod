#include "PlayerProfilePresenter.h"
#include "ShopWalletUpdate.h"
#include "ESpecialEventStatus.h"
#include "CombinedSpecialEventData.h"

void UPlayerProfilePresenter::RefreshWallet()
{

}

void UPlayerProfilePresenter::OnWalletUpdated(const TArray<FShopWalletUpdate>& walletUpdates)
{

}

void UPlayerProfilePresenter::OnCurrentSpecialEventChanged(const FCombinedSpecialEventData& previousSpecialEvent, ESpecialEventStatus previousSpecialEventStatus, const FCombinedSpecialEventData& currentSpecialEvent, ESpecialEventStatus currentSpecialEventStatus)
{

}

FText UPlayerProfilePresenter::GetPlayerName()
{
	return FText::GetEmpty();
}

UPlayerProfilePresenter::UPlayerProfilePresenter()
{
	this->CorePlayerProfileWidgetClass = NULL;
	this->Filter = 0;
}
