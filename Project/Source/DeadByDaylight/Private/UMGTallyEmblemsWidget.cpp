#include "UMGTallyEmblemsWidget.h"

class UUMGTallyEmblemWidget;

TArray<UUMGTallyEmblemWidget*> UUMGTallyEmblemsWidget::GetEmblems() const
{
	return TArray<UUMGTallyEmblemWidget*>();
}

UUMGTallyEmblemsWidget::UUMGTallyEmblemsWidget()
{
	this->EmblemWidgetClass = NULL;
	this->EmblemsContainer = NULL;
	this->_emblems = TArray<UUMGTallyEmblemWidget*>();
}
