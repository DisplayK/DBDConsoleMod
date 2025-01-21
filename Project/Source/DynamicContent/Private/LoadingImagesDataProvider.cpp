#include "LoadingImagesDataProvider.h"

ULoadingImagesDataProvider::ULoadingImagesDataProvider()
{
	this->_cachedLoadingImages = TMap<FName, FLoadingImages>();
	this->_owningDynamicContentHolder = NULL;
}
