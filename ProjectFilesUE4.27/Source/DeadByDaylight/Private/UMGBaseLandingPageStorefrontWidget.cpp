#include "UMGBaseLandingPageStorefrontWidget.h"
#include "EStorefrontState.h"

void UUMGBaseLandingPageStorefrontWidget::HandleTabSelected(const EStorefrontState& tabId)
{

}

UUMGBaseLandingPageStorefrontWidget::UUMGBaseLandingPageStorefrontWidget()
{
	this->BigButtonsSlot = NULL;
	this->SmallButtonsSlot1 = NULL;
	this->SmallButtonsSlot2 = NULL;
	this->SmallButtonClass = NULL;
	this->MediumButtonClass = NULL;
	this->BigButtonClass = NULL;
	this->DisabledButtonText = FText::GetEmpty();
	this->_landingPageTabs = TArray<UUMGLandingPageButtonWidget*>();
}
