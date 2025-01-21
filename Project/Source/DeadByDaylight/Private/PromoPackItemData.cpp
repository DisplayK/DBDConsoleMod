#include "PromoPackItemData.h"

FPromoPackItemData::FPromoPackItemData()
{
	this->ItemIcon = NULL;
	this->ItemID = NAME_None;
	this->ItemRarity = EItemRarity::Common;
	this->Amount = 0;
}
