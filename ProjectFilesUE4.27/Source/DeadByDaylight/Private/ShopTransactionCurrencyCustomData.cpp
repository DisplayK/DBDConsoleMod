#include "ShopTransactionCurrencyCustomData.h"

FShopTransactionCurrencyCustomData::FShopTransactionCurrencyCustomData()
{
	this->productsReceived = FShopTransactionCurrencyProducts{};
	this->transactionName = TEXT("");
	this->transactionType = TEXT("");
}
