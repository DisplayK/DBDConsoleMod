#include "PresenterManager.h"
#include "ELoadingTransitionType.h"

void UPresenterManager::OnViewportCreated()
{

}

void UPresenterManager::OnLoadingTransition(const ELoadingTransitionType transitionType)
{

}

UPresenterManager::UPresenterManager()
{
	this->_persistentPresenterGroups = TArray<UPresenterGroup*>();
	this->_transientPresenterGroups = TArray<UPresenterGroup*>();
}
