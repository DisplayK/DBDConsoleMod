#include "UMGLoadoutBaseWidget.h"
#include "InventorySlotData.h"
#include "ELoadoutSlot.h"

void UUMGLoadoutBaseWidget::SetLoadoutData(const TArray<FInventorySlotData>& loadoutData, bool usingMatchRulesNew, bool perkSlotsLockedByAdminNew, ELoadoutSlot loadoutSlot, bool isSlasherNew, bool isClickable)
{

}

UUMGLoadoutBaseWidget::UUMGLoadoutBaseWidget()
{
	this->ItemOrPowerButton = NULL;
	this->AddonFirstButton = NULL;
	this->AddonSecondButton = NULL;
	this->OfferingButton = NULL;
	this->PerkFirstButton = NULL;
	this->PerkSecondButton = NULL;
	this->PerkThirdButton = NULL;
	this->PerkFourthButton = NULL;
	this->LoadoutItemButtons = TArray<UUMGLoadoutItemButton*>();
	this->UsingMatchRules = false;
	this->PerkSlotsLockedByAdmin = false;
	this->IsSlasher = false;
}
