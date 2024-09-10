#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetLibraryLoader.h"
#include "AssetLibraryManager.generated.h"

class UTutorialAssetLibrary;
class UIniAssetLibrary;
class UGameAssetLibrary;
class UCharacterItemsAssetLibrary;
class UMenuAssetLibrary;
class UShopManager;

UCLASS()
class UAssetLibraryManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UObject* _worldContextObject;

	UPROPERTY(Transient)
	TMap<int32, UCharacterItemsAssetLibrary*> _characterItemsAssetLibrary;

	UPROPERTY(Transient)
	UIniAssetLibrary* _globalAssetLibrary;

	UPROPERTY(Transient)
	UMenuAssetLibrary* _menuAssetLibrary;

	UPROPERTY(Transient)
	UGameAssetLibrary* _gameAssetLibrary;

	UPROPERTY(Transient)
	UTutorialAssetLibrary* _tutorialAssetLibrary;

	UPROPERTY(Transient)
	UShopManager* _shopManager;

	UPROPERTY(Transient)
	TArray<FAssetLibraryLoader> _loadingList;

	UPROPERTY()
	int32 CharacterItemsAssetLoadCountPerChunk;

	UPROPERTY()
	int32 BlindPackAssetLoadCountPerChunk;

	UPROPERTY()
	int32 MenuAssetLoadCountPerChunk;

	UPROPERTY()
	int32 GlobalAssetLoadCountPerChunk;

	UPROPERTY()
	int32 GameAssetLoadCountPerChunk;

public:
	UAssetLibraryManager();
};

FORCEINLINE uint32 GetTypeHash(const UAssetLibraryManager) { return 0; }
