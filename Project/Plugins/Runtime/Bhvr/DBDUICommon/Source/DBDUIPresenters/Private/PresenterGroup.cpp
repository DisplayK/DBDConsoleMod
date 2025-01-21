#include "PresenterGroup.h"

UPresenterGroup::UPresenterGroup()
{
	this->WidgetInstantiationPhase = EPresenterPhase::Initialization;
	this->_components = TArray<UUIComponent*>();
	this->_presenters = TArray<UPresenter*>();
}
