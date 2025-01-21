#include "CoreTabContainerWidget.h"
#include "TabWidgetData.h"

class UMaterialInterface;
class UCoreSelectableButtonWidget;
class UCoreTabWidget;

void UCoreTabContainerWidget::UpdateBackgroundSkin(int32 key, UMaterialInterface* skinMaterial)
{

}

void UCoreTabContainerWidget::SetUseControllerTabSwitching(bool enabled)
{

}

void UCoreTabContainerWidget::SetTabVisible(int32 key, bool visible)
{

}

void UCoreTabContainerWidget::SetTabEnabled(int32 key, bool enabled)
{

}

void UCoreTabContainerWidget::SetNotificationVisibility(int32 key, bool hasNotification)
{

}

void UCoreTabContainerWidget::RemoveTabs()
{

}

void UCoreTabContainerWidget::OnTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreTabContainerWidget::LayOutTabs()
{

}

void UCoreTabContainerWidget::Init(const TArray<FTabWidgetData>& tabsData)
{

}

UCoreTabWidget* UCoreTabContainerWidget::GetTab(int32 key) const
{
	return NULL;
}

UCoreTabContainerWidget::UCoreTabContainerWidget()
{
	this->AlignHorizontally = true;
	this->CoreTabClass = NULL;
	this->TabContainer = NULL;
	this->UseControllerTabSwitching = true;
	this->CanLoop = false;
	this->FillContainerSpace = false;
	this->SendAnalyticsData = false;
}
