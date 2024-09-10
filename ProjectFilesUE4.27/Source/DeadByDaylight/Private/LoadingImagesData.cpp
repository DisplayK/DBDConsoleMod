#include "LoadingImagesData.h"

FLoadingImagesData::FLoadingImagesData()
{
	this->ID = NAME_None;
	this->Images = TArray<TSoftObjectPtr<UPaperSprite>>();
	this->InfoData = TArray<FLoadingInfoData>();
	this->IsAvailableForSurvivor = false;
	this->IsAvailableForKiller = false;
	this->IsGenericImages = false;
}
