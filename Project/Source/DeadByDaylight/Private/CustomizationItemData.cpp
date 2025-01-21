#include "CustomizationItemData.h"

FCustomizationItemData::FCustomizationItemData()
{
	this->Category = ECustomizationCategory::None;
	this->ItemMesh = NULL;
	this->AnimClass = NULL;
	this->ItemBlueprint = NULL;
	this->MaterialsMap = TArray<FMaterialReplacerData>();
	this->ConditionalMaterialReplacer = FConditionalMaterialReplacer{};
	this->TexturesMap = TArray<FTextureReplacerData>();
	this->SkeletalComponentTags = TArray<FName>();
	this->CosmeticOverrideSemanticTags = FGameplayTagContainer{};
	this->CollectionName = FText::GetEmpty();
	this->CollectionDescription = FText::GetEmpty();
	this->PrestigeUlockLevel = 0;
	this->PrestigeUnlockDate = TEXT("");
	this->EventId = NAME_None;
	this->CharmCategory = ECharmCategory::None;
	this->SocketAttachements = TArray<FBPAttachementSocketData>();
	this->UnlockingConditions = TArray<FUnlockSaveStatCondition>();
	this->IsInStore = false;
	this->IsInNonViolentBuild = false;
	this->IsAvailableInAtlantaBuild = false;
	this->PlatformExclusiveFlag = 0;
	this->CustomSFXs = TArray<FCustomSoundFXData>();
	this->AnimationData = FCustomAnimData{};
}
