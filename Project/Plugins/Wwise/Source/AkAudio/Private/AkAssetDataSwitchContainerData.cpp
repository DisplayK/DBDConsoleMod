#include "AkAssetDataSwitchContainerData.h"

UAkAssetDataSwitchContainerData::UAkAssetDataSwitchContainerData()
{
	this->GroupValue = NULL;
	this->DefaultGroupValue = NULL;
	this->MediaList = TArray<UAkMediaAsset*>();
	this->Children = TArray<UAkAssetDataSwitchContainerData*>();
}
