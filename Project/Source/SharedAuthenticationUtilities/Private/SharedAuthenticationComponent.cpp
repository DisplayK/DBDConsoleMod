#include "SharedAuthenticationComponent.h"

USharedAuthenticationComponent::USharedAuthenticationComponent()
{
	this->PopupZOrder = 10;
	this->AuthenticationProviderSelectionWidget = NULL;
	this->AuthenticationProviderSelectionWidgetToLoad = NULL;
	this->LoginBackgroundToLoadWidgetToLoadMap = TMap<ESharedAuthenticationProvider, TSoftClassPtr<UUserWidget>>();
	this->_worldContextObject = NULL;
	this->_loginBackgroundWidget = NULL;
	this->_identityAuthenticationSelectionWidget = NULL;
	this->_migrateComponent = NULL;
}
