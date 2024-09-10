#include "CharacterHelper.h"
#include "CharacterDescription.h"
#include "OutfitData.h"
#include "CustomizationItemData.h"
#include "EPlayerRole.h"

TArray<FOutfitData> UCharacterHelper::GetOutfitsByCharacterID(const FString& characterId)
{
	return TArray<FOutfitData>();
}

void UCharacterHelper::GetOutfitComposition(FCustomizationItemData& returnHead, FCustomizationItemData& returnTorso, FCustomizationItemData& returnLegsWeapon, const FString& outfitId)
{

}

TArray<FCharacterDescription> UCharacterHelper::GetCharactersByRole(const EPlayerRole role)
{
	return TArray<FCharacterDescription>();
}

void UCharacterHelper::GetAllOutfitComponentsOfCharacter(TArray<FCustomizationItemData>& returnHeads, TArray<FCustomizationItemData>& returnTorsos, TArray<FCustomizationItemData>& returnLegsWeapons, const FString& characterId)
{

}

UCharacterHelper::UCharacterHelper()
{

}
