#include "HudObjectivesPresenter.h"
#include "EVoidEnergyChangeReason.h"
#include "EventProgressionData.h"

void UHudObjectivesPresenter::OnEventProgressPendingChanged(const int32 value, const EVoidEnergyChangeReason reasonEnergyChanged)
{

}

void UHudObjectivesPresenter::OnEventProgressionDataInitialized(const FEventProgressionData& hudEventProgressionViewData)
{

}

void UHudObjectivesPresenter::OnEventProgressBankedChanged(const int32 value)
{

}

UHudObjectivesPresenter::UHudObjectivesPresenter()
{
	this->CoreHudObjectivesWidgetClass = NULL;
}
