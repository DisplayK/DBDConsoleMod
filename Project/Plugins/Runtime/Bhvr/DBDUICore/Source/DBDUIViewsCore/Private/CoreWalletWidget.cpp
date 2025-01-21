#include "CoreWalletWidget.h"
#include "ECurrencyType.h"
#include "CurrencyLabelViewData.h"

void UCoreWalletWidget::UpdateCurrency(const ECurrencyType type, int32 newBalance, int32 previousBalance)
{

}

void UCoreWalletWidget::PlayNotEnoughCurrency(const ECurrencyType type)
{

}

void UCoreWalletWidget::InitWallet(const TArray<FCurrencyLabelViewData>& walletData)
{

}

void UCoreWalletWidget::FullUpdateCurrency(const FCurrencyLabelViewData& viewData)
{

}

UCoreWalletWidget::UCoreWalletWidget()
{
	this->CoreCurrencyLabelWidgetClass = NULL;
	this->CurrencyContainer = NULL;
	this->_currencyWidgetMap = TMap<ECurrencyType, UCoreCurrencyLabelWidget*>();
}
