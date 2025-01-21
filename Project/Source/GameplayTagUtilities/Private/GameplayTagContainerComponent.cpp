#include "GameplayTagContainerComponent.h"
#include "GameplayTagContainer.h"

void UGameplayTagContainerComponent::Remove(FGameplayTag state)
{

}

void UGameplayTagContainerComponent::Add(FGameplayTag state)
{

}

UGameplayTagContainerComponent::UGameplayTagContainerComponent()
{
	this->_tagToQueries = TMap<FGameplayTag, FQueryInstanceCollection>();
	this->_ownerToQueries = TMap<UObject*, FQueryInstanceCollection>();
}
