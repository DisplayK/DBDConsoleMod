#include "UMGExpandableListWidget.h"

void UUMGExpandableListWidget::ToggleExpansion()
{

}

UUMGExpandableListWidget::UUMGExpandableListWidget()
{
	this->ShouldHideExpandableListIfEmpty = false;
	this->IsExtendedAtStart = false;
	this->ExpansionButton = NULL;
	this->ItemContainer = NULL;
	this->CategorieName = NULL;
	this->ItemCount = NULL;
	this->ExpandableArea = NULL;
	this->HeaderTitle = FText::GetEmpty();
	this->_childWidgets = TArray<UUserWidget*>();
}
