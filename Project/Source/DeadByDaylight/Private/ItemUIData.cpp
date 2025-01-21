#include "ItemUIData.h"

FItemUIData::FItemUIData()
{
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IconFilePathList = TArray<FString>();
	this->IconAssetList = TArray<TSoftObjectPtr<UTexture2D>>();
	this->CustomTransformation = FCustomTransformation{};
	this->PlatformsUnlicensedNameOverride = 0;
	this->PlatformsUnlicensedDescriptionOverride = 0;
	this->PlatformsForIconUnlicensedFilePathListOverride = 0;
	this->IconUnlicensedFilePathListOverride = TArray<FString>();
	this->LicenseExpirationOverride = false;
	this->DisplayNameUnlicensedOverride = FText::GetEmpty();
	this->DescriptionUnlicensedOverride = FText::GetEmpty();
	this->AssociatedCharacterIndex = 0;
}
