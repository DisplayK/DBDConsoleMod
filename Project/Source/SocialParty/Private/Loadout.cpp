#include "Loadout.h"

FLoadout::FLoadout()
{
	this->offering = NAME_None;
	this->item = NAME_None;
	this->addon1 = NAME_None;
	this->addon2 = NAME_None;
	this->_perks = TArray<FName>();
}
