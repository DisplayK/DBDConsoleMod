#include "LoadoutMenuPopupWidget.h"
#include "TabWidgetData.h"

class UCoreButtonWidget;

void ULoadoutMenuPopupWidget::UpdateInventoryItemData(const int32 currentPage)
{

}

void ULoadoutMenuPopupWidget::ShowMenuLoadoutPartsTooltip(UCoreButtonWidget* hoveredSlotWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuPresetClicked(UCoreButtonWidget* menuPerkWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuPowerSlotClicked(UCoreButtonWidget* menuPowerWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuPerkSlotClicked(UCoreButtonWidget* menuPerkWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuOfferingSlotClicked(UCoreButtonWidget* menuOfferingWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuItemSlotClicked(UCoreButtonWidget* menuItemWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuInventorySlotClicked(UCoreButtonWidget* menuPerkWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuAddonSlotClicked(UCoreButtonWidget* menuAddonWidget)
{

}

void ULoadoutMenuPopupWidget::OnDropDownListSelectedOptionChanged(FTabWidgetData buttonData)
{

}

void ULoadoutMenuPopupWidget::HideMenuLoadoutPartsTooltip(UCoreButtonWidget* unhoveredSlotWidget)
{

}

ULoadoutMenuPopupWidget::ULoadoutMenuPopupWidget()
{
	this->DropDownListWidget = NULL;
	this->DropDownListTrigger = NULL;
	this->CoreMenuPower = NULL;
	this->CoreMenuItem = NULL;
	this->CoreAddon_1 = NULL;
	this->CoreAddon_2 = NULL;
	this->CoreOffering = NULL;
	this->CorePerk_1 = NULL;
	this->CorePerk_2 = NULL;
	this->CorePerk_3 = NULL;
	this->CorePerk_4 = NULL;
	this->Preset_1 = NULL;
	this->Preset_2 = NULL;
	this->Preset_3 = NULL;
	this->Preset_4 = NULL;
	this->InventoryGridContainer = NULL;
	this->PaginationGridContainer = NULL;
	this->_loadoutPowerClass = NULL;
	this->_loadoutItemWidgetClass = NULL;
	this->_loadoutAddonClass = NULL;
	this->_loadoutOfferingClass = NULL;
	this->_loadoutPerkClass = NULL;
	this->_paginationWidgetClass = NULL;
	this->_inventoryPerRow = 3;
	this->_inventoryPerColumn = 5;
	this->_cellsPerRow = 5;
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->_inventoryItemWidgetList = TArray<UCoreMenuLoadoutPartWidget*>();
	this->_perkSlotWidget = TArray<UCoreMenuPerkWidget*>();
	this->_addonSlotWidget = TArray<UCoreMenuAddonWidget*>();
	this->_presetWidgets = TArray<UCorePresetWidget*>();
	this->_menuLoadoutPartViewData = NULL;
	this->_loadoutSlot = ELoadoutSlot::SKIN;
	this->_loadoutMenuPopupViewData = NULL;
	this->_numberOfPaginationItem = 0;
	this->_perkData = TArray<ULoadoutMenuPopupViewData*>();
	this->_addonLoadoutData = TArray<ULoadoutMenuPopupViewData*>();
	this->_inventoryViewData = TArray<ULoadoutMenuPopupViewData*>();
}
