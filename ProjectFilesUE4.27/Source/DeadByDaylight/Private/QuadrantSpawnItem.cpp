#include "QuadrantSpawnItem.h"

FQuadrantSpawnItem::FQuadrantSpawnItem()
{
	this->Type = EQuadrantSpawnType::L_Shape;
	this->Elements = TArray<FWeightedItem>();
}
