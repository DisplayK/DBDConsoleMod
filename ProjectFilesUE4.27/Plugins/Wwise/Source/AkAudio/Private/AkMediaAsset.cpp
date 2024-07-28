#include "AkMediaAsset.h"

UAkMediaAsset::UAkMediaAsset()
{
	this->Id = 0;
	this->AutoLoad = true;
	this->UserData = TArray<UObject*>();
	this->CurrentMediaAssetData = NULL;
}
