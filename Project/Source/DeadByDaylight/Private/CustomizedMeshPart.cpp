#include "CustomizedMeshPart.h"

FCustomizedMeshPart::FCustomizedMeshPart()
{
	this->Category = ECustomizationCategory::None;
	this->DefaultItemId = FDataTableDropdown{};
	this->SocketName = NAME_None;
}
