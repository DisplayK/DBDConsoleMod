#include "UMGLoadoutItemButton.h"
#include "EItemRarity.h"
#include "EInventoryButtonState.h"
#include "EStatusEffectType.h"
#include "InventorySlotData.h"

void UUMGLoadoutItemButton::UpdateWidgetByState(EInventoryButtonState state)
{

}

void UUMGLoadoutItemButton::UpdateWidgetByData(const FInventorySlotData& slotData)
{

}

void UUMGLoadoutItemButton::UpdateUnlockable(const FString& nameToDisplay, int32 unlockableLevel)
{

}

void UUMGLoadoutItemButton::UpdateStackCount(int32 stackCount)
{

}

void UUMGLoadoutItemButton::UpdateImageColor(EItemRarity rarity, EStatusEffectType effectType)
{

}

void UUMGLoadoutItemButton::ShowClickableOutline(bool clickable)
{

}

void UUMGLoadoutItemButton::SetIsSelected(bool isSelected)
{

}

void UUMGLoadoutItemButton::SetIconImageByPath(const FString& iconPath)
{

}

void UUMGLoadoutItemButton::OnLockedButtonClicked()
{

}

FName UUMGLoadoutItemButton::GetLoadoutItemID()
{
	return NAME_None;
}

void UUMGLoadoutItemButton::BroadcastLongPressEvent(FName itemID)
{

}

void UUMGLoadoutItemButton::BroadcastClickedEvent(FName itemID)
{

}

UUMGLoadoutItemButton::UUMGLoadoutItemButton()
{
	this->HideStackCount = false;
	this->TextStackCount = NULL;
	this->EmptyCanvas = NULL;
	this->EmptyButton = NULL;
	this->LockedButton = NULL;
	this->ActionCanvas = NULL;
	this->ImageRarityBG = NULL;
	this->ImageGradient = NULL;
	this->ImagePaint = NULL;
	this->ImageEventBorder = NULL;
	this->ImagePaintTop = NULL;
	this->ImagePaintBottom = NULL;
	this->EmptyCanvasVisibility = ESlateVisibility::Visible;
	this->ActionCanvasVisibility = ESlateVisibility::Visible;
	this->PrivateCanvasVisibility = ESlateVisibility::Visible;
	this->LockIconVisibility = ESlateVisibility::Visible;
	this->EmptyIconVisibility = ESlateVisibility::Visible;
	this->SpecialEventVisiblity = ESlateVisibility::Visible;
	this->LoadoutSelectedVisibility = ESlateVisibility::Visible;
	this->LoadoutLockVisibility = ESlateVisibility::Visible;
	this->ImageIcon = NULL;
	this->ImageShadow = NULL;
	this->ActionButton = NULL;
	this->_triggerClickEventForLoadoutWidget = false;
	this->CanvasUnlock = NULL;
	this->TextUnlockLevel = NULL;
}
