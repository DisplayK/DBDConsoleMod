#include "RarityTexture.h"

FRarityTexture::FRarityTexture()
{
	this->Type = NAME_None;
	this->Rarity = EItemRarity::Common;
	this->Texture = FSoftObjectPath{};
}
