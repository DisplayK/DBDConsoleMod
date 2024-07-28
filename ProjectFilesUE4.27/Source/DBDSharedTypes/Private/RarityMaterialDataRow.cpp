#include "RarityMaterialDataRow.h"

FRarityMaterialDataRow::FRarityMaterialDataRow()
{
	this->Rarity = EItemRarity::Common;
	this->RarityData = FRarityMaterialData{};
}
