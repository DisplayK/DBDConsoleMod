#include "AtlantaSaveGame.h"

UAtlantaSaveGame::UAtlantaSaveGame()
{
	this->SaveSlotName = TEXT("SavedAtlantaSettings");
	this->UserIndex = 0;
	this->LastGenericLoadingImageId = NAME_None;
	this->LastSpecificLoadingImageId = NAME_None;
	this->IsLastSpecificImage = false;
}
