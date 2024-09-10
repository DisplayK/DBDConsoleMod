#include "PerkHudWidget.h"

void UPerkHudWidget::RemoveExistingPerk(FName perkID, bool isExternal)
{

}

UPerkHudWidget::UPerkHudWidget()
{
	this->PerksClickable = NULL;
	this->PerksExternal = NULL;
	this->AtlantaPerkActionButtonClass = NULL;
	this->_clickablePerksMap = TMap<FName, UPerkActionButton*>();
	this->_externalPerksMap = TMap<FName, UPerkActionButton*>();
}
