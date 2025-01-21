#include "UIDataManager.h"

UUIDataManager::UUIDataManager()
{
	this->RarityMaterialMap = TMap<EItemRarity, FRarityMaterialData>();
	this->RichTextStyleMap = TMap<FString, FTextBlockStyle>();
	this->CurrencyUIDataMap = TMap<ECurrencyType, FCurrencyProgressionUIData>();
	this->ProgressionUIDataMap = TMap<EProgressionType, FCurrencyProgressionUIData>();
	this->ArchiveTomeSkinDataMap = TMap<EArchiveMenuState, FArchiveTomeSkinData>();
}
