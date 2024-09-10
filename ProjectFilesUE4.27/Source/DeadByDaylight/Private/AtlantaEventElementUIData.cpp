#include "AtlantaEventElementUIData.h"

FAtlantaEventElementUIData::FAtlantaEventElementUIData()
{
	this->ElementType = EPromoPackContentType::None;
	this->DisplayName = FText::GetEmpty();
	this->NameID = NAME_None;
	this->Color = FColor{};
}
