#include "PromoPackContentDataAsset.h"

UPromoPackContentDataAsset::UPromoPackContentDataAsset()
{
	this->Data = TMap<EPromoPackContentType, FPromoPackContentTypeData>();
}
