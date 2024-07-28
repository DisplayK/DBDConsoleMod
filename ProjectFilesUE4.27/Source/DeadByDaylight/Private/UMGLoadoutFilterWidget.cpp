#include "UMGLoadoutFilterWidget.h"
#include "UObject/SoftObjectPtr.h"

class UTexture2D;

void UUMGLoadoutFilterWidget::OnFilterButtonClicked(FName filterName)
{

}

void UUMGLoadoutFilterWidget::InitFilterWidget(const TMap<FName, TSoftObjectPtr<UTexture2D>>& filtersInfo)
{

}

void UUMGLoadoutFilterWidget::ClearSelectedFilter()
{

}

UUMGLoadoutFilterWidget::UUMGLoadoutFilterWidget()
{
	this->AtlantaLoadoutFilterButtonClass = NULL;
	this->FilterContainerBox = NULL;
	this->Filters = TArray<FName>();
	this->FilterButtons = TArray<UUMGLoadoutFilterButton*>();
	this->SelectedFilterButton = NULL;
}
