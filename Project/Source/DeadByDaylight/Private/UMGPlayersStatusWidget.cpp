#include "UMGPlayersStatusWidget.h"

class UUMGPlayerStatusIcon;

void UUMGPlayersStatusWidget::OnPlayerStatusClicked(UUMGPlayerStatusIcon* playerStatusIcon)
{

}

UUMGPlayersStatusWidget::UUMGPlayersStatusWidget()
{
	this->CustomizedHudWrapperIdMap = TMap<EPlayerRole, FCustomizedHudPlayerWrapperIdMapContainer>();
	this->PlayerStatusIconClass = NULL;
	this->playersContainer = NULL;
	this->playerIconsByName = TMap<FString, UUMGPlayerStatusIcon*>();
	this->_playerIcons = TArray<UUMGPlayerStatusIcon*>();
}
