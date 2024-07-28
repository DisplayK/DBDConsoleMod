#include "InGameAssetPreloaderComponent.h"

UInGameAssetPreloaderComponent::UInGameAssetPreloaderComponent()
{
	this->_generalPrimaryAssetIds = TSet<FPrimaryAssetId>();
	this->_generalRegularAssets = TSet<TSoftClassPtr<UObject>>();
	this->_assetGathererClasses = TArray<TSubclassOf<UInGameAssetPreloaderGatherer>>();
	this->_assetGatherers = TArray<UInGameAssetPreloaderGatherer*>();
}
