#include "CorePlayerStatusWidget.h"
#include "ESleepingUIState.h"
#include "PlayerStatusViewData.h"
#include "EPlayerStatus.h"
#include "EObsessionUIState.h"
#include "EPlayerStateChangeType.h"

class UDataTable;
class UCorePlayerStatusKillerEffectWidget;

bool UCorePlayerStatusWidget::ShouldPlaySleepAnimation(ESleepingUIState newSleepState) const
{
	return false;
}

bool UCorePlayerStatusWidget::HasTimerProgressChanged(float newTimerProgress) const
{
	return false;
}

bool UCorePlayerStatusWidget::HasPlayerStatusDataChanged(const FPlayerStatusViewData& newViewData) const
{
	return false;
}

bool UCorePlayerStatusWidget::HasPlayerStateChanged(EPlayerStatus newPlayerState) const
{
	return false;
}

bool UCorePlayerStatusWidget::HasObsessionStateChanged(EObsessionUIState newObsessionState) const
{
	return false;
}

bool UCorePlayerStatusWidget::HasKillerStatusDataChanged(const FPlayerStatusViewData& newViewData) const
{
	return false;
}

EPlayerStateChangeType UCorePlayerStatusWidget::GetPlayerStateChangeType(const FPlayerStatusViewData& newViewData) const
{
	return EPlayerStateChangeType::None;
}

UCorePlayerStatusKillerEffectWidget* UCorePlayerStatusWidget::GetKillerStatusEffectWidget() const
{
	return NULL;
}

UDataTable* UCorePlayerStatusWidget::GetKillerStatusDataMappingDB() const
{
	return NULL;
}

FPlayerStatusViewData UCorePlayerStatusWidget::CacheViewData(FPlayerStatusViewData data)
{
	return FPlayerStatusViewData{};
}

UCorePlayerStatusWidget::UCorePlayerStatusWidget()
{
	this->MaxNameLength = 21;
	this->PlayerStatusAssets = TMap<EPlayerStatus, FPlayerStatusAssets>();
	this->ObsessionSfx = NULL;
	this->PlayerNameTextfield = NULL;
	this->KillerStatusContainer = NULL;
	this->_killerStatusEffectWidget = NULL;
	this->_killerStatusDataMappingDB = NULL;
}
