#include "CorePaginationContainerWidget.h"

class UCoreSelectableButtonWidget;

void UCorePaginationContainerWidget::UpdateSelectedWidget(int32 currentIndex)
{

}

void UCorePaginationContainerWidget::UpdatePaginationWidget(int32 numberOfPages)
{

}

void UCorePaginationContainerWidget::OnPaginationSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

int32 UCorePaginationContainerWidget::GetCurrentPage()
{
	return 0;
}

UCorePaginationContainerWidget::UCorePaginationContainerWidget()
{
	this->PaginationWidgetClass = NULL;
	this->MaxNumberOfPages = 0;
	this->PaginationContainer = NULL;
	this->FirstPage = NULL;
	this->FirstEllipsis = NULL;
	this->LastEllipsis = NULL;
	this->LastPage = NULL;
	this->_paginationWidgetList = TArray<UCoreSelectableButtonWidget*>();
}
