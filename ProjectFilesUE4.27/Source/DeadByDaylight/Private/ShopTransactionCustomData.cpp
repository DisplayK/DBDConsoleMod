#include "ShopTransactionCustomData.h"

FShopTransactionCustomData::FShopTransactionCustomData()
{
	this->productsReceived = FShopTransactionProducts{};
	this->transactionName = TEXT("");
	this->transactionType = TEXT("");
}
