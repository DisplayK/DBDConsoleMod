#include "ShopTransactionProducts.h"

FShopTransactionProducts::FShopTransactionProducts()
{
	this->virtualCurrencies = TArray<FShopTransactionVirtualCurrency>();
	this->items = TArray<FShopTransactionItem>();
}
