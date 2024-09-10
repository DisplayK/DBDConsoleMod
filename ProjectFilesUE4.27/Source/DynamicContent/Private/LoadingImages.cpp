#include "LoadingImages.h"

FLoadingImages::FLoadingImages()
{
	this->ID = NAME_None;
	this->Images = TArray<FSlateBrush>();
	this->ImagesHintInfo = TArray<FLoadingImagesHintInfo>();
	this->IsAvailableForSurvivor = false;
	this->IsAvailableForKiller = false;
	this->IsGenericImages = false;
}
