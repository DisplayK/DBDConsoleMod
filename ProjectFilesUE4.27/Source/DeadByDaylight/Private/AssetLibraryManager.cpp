#include "AssetLibraryManager.h"

UAssetLibraryManager::UAssetLibraryManager()
{
	this->_worldContextObject = NULL;
	this->_characterItemsAssetLibrary = TMap<int32, UCharacterItemsAssetLibrary*>();
	this->_globalAssetLibrary = NULL;
	this->_menuAssetLibrary = NULL;
	this->_gameAssetLibrary = NULL;
	this->_tutorialAssetLibrary = NULL;
	this->_shopManager = NULL;
	this->_loadingList = TArray<FAssetLibraryLoader>();
	this->CharacterItemsAssetLoadCountPerChunk = 3;
	this->BlindPackAssetLoadCountPerChunk = 4;
	this->MenuAssetLoadCountPerChunk = 1;
	this->GlobalAssetLoadCountPerChunk = 1;
	this->GameAssetLoadCountPerChunk = 10;
}
