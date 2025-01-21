#include "Presenter.h"
#include "EContext.h"

bool UPresenter::ShouldPresent() const
{
	return false;
}

void UPresenter::OnContextSectionChanged(EContext context)
{

}

bool UPresenter::IsPlayerStateReady() const
{
	return false;
}

bool UPresenter::IsGameStateReady() const
{
	return false;
}

bool UPresenter::IsContextReady() const
{
	return false;
}

UPresenter::UPresenter()
{
	this->_overrideWidgetInstanciationPhase = false;
	this->_widgetInstantiationPhase = EPresenterPhase::Initialization;
	this->RequestPresentationAtBeginPlay = true;
	this->InitialVisibility = ESlateVisibility::Visible;
	this->_widgetZOrder = 0;
	this->_widget = NULL;
	this->_ignoredPresentationRequirementFunctions = TSet<FString>();
	this->_presentationRequirementFunctions = TArray<UPresenterRequirementFunction*>();
}
