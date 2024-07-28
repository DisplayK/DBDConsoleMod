#include "EquippedPlayerCustomization.h"

FEquippedPlayerCustomization::FEquippedPlayerCustomization()
{
	this->_equippedCustomization = FCharacterCustomization{};
	this->_equippedCharms = TArray<FCharmIdSlot>();
}
