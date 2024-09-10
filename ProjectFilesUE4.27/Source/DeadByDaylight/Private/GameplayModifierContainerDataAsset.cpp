#include "GameplayModifierContainerDataAsset.h"

UGameplayModifierContainerDataAsset::UGameplayModifierContainerDataAsset()
{
	this->ModifierContainerComponent = NULL;
	this->RequiredModifierContainers = TArray<TSoftObjectPtr<UGameplayModifierContainerDataAsset>>();
}
