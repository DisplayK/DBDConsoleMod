#include "CharacterDescription.h"

FCharacterDescription::FCharacterDescription()
{
	this->CharacterIndex = 0;
	this->Role = EPlayerRole::VE_None;
	this->Difficulty = ECharacterDifficulty::VE_None;
	this->DisplayName = FText::GetEmpty();
	this->BackStory = FText::GetEmpty();
	this->Biography = FText::GetEmpty();
	this->IconFilePath = NAME_None;
	this->HudIcon = NULL;
	this->BackgroundImagePath = NAME_None;
	this->CustomizationDescription = TArray<FCustomizedMeshPart>();
	this->ChapterDlcId = TEXT("");
	this->AdditionalDlcIds = TArray<FString>();
	this->AvailableIfDlcInstalled = false;
	this->DebugName = NAME_None;
	this->IsInChunk0 = false;
	this->IsAvailableInNonViolentBuild = false;
	this->IsAvailableInAtlantaBuild = false;
	this->PlatformExclusiveFlag = 0;
	this->GamePawn = NULL;
	this->MenuPawn = NULL;
	this->DefaultItem = NAME_None;
	this->Gender = EGender::VE_Male;
	this->KillerAbilities = TArray<EKillerAbilities>();
	this->TunableDB = FDataTableProxy{};
	this->KillerHeight = EKillerHeight::Short;
	this->SlideShowDescriptions = FSlideShowDescription{};
	this->HideStoreCustomizations = false;
	this->CustomizationCategories = TArray<FName>();
	this->CharacterId = TEXT("");
}
