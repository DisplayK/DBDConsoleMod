#include "ShopTransactionItemCustomData.h"

FShopTransactionItemCustomData::FShopTransactionItemCustomData()
{
	this->productsReceived = FShopTransactionItemProducts{};
	this->transactionName = TEXT("");
	this->transactionType = TEXT("");
}
