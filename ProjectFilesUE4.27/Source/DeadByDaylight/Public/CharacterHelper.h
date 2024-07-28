#pragma once

#include "CoreMinimal.h"
#include "CharacterDescription.h"
#include "UObject/NoExportTypes.h"
#include "OutfitData.h"
#include "CustomizationItemData.h"
#include "EPlayerRole.h"
#include "CharacterHelper.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCharacterHelper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static TArray<FOutfitData> GetOutfitsByCharacterID(const FString& characterId);

	UFUNCTION(BlueprintCallable)
	static void GetOutfitComposition(FCustomizationItemData& returnHead, FCustomizationItemData& returnTorso, FCustomizationItemData& returnLegsWeapon, const FString& outfitId);

	UFUNCTION(BlueprintCallable)
	static TArray<FCharacterDescription> GetCharactersByRole(const EPlayerRole role);

	UFUNCTION(BlueprintCallable)
	static void GetAllOutfitComponentsOfCharacter(TArray<FCustomizationItemData>& returnHeads, TArray<FCustomizationItemData>& returnTorsos, TArray<FCustomizationItemData>& returnLegsWeapons, const FString& characterId);

public:
	UCharacterHelper();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterHelper) { return 0; }
