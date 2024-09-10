#include "StoreItemSlotData.h"

FStoreItemSlotData::FStoreItemSlotData()
{
	this->ItemId = NAME_None;
	this->Category = ECustomizationCategory::None;
	this->MirrorsId = NAME_None;
	this->IconPath = TEXT("");
	this->DisplayName = TEXT("");
	this->DisplayCollectionName = TEXT("");
	this->Description = TEXT("");
	this->RoleCategoryInfo = TEXT("");
	this->RarityPartInfo = TEXT("");
	this->Rarity = EItemRarity::Common;
	this->EventInfo = FSpecialEventUIInfo{};
	this->PurchaseDataList = TArray<FPurchaseCurrencyData>();
	this->ParentBundleIds = TArray<FName>();
	this->ChildrenItemIds = TArray<FName>();
	this->CustomTransformation = FCustomTransformation{};
	this->IsOwned = false;
	this->IsBuyable = false;
	this->IsEquipped = false;
	this->IsNewInStore = false;
	this->IsLocked = false;
	this->IsInStore = false;
	this->AssociatedRole = EPlayerRole::VE_None;
	this->ReleaseDate = FDateTime{};
	this->IsEnabled = false;
}
