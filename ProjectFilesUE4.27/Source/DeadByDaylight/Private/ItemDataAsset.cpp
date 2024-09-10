#include "ItemDataAsset.h"

UItemDataAsset::UItemDataAsset()
{
	this->ActorClass = NULL;
	this->RequiredModifierContainers = TArray<TSoftObjectPtr<UGameplayModifierContainerDataAsset>>();
}
