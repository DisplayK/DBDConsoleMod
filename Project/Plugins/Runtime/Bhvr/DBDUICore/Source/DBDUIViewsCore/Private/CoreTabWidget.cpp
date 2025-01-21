#include "CoreTabWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"

class UTexture2D;

void UCoreTabWidget::SetNotificationVisibility(bool hasNotification)
{

}

void UCoreTabWidget::SetIconTexture(UTexture2D* iconTexture, const FVector2D forcedIconSize)
{

}

void UCoreTabWidget::SetIconSoftTexture(TSoftObjectPtr<UTexture2D> iconTexture, const FVector2D forcedIconSize)
{

}

bool UCoreTabWidget::HasLabelTooltip()
{
	return false;
}

FText UCoreTabWidget::GetTabText() const
{
	return FText::GetEmpty();
}

int32 UCoreTabWidget::GetKey() const
{
	return 0;
}

UCoreTabWidget::UCoreTabWidget()
{
	this->TabTextField = NULL;
	this->TabImage = NULL;
	this->NotificationWidget = NULL;
	this->LabelTooltipText = FText::GetEmpty();
}
