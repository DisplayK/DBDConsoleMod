#include "UMGPartyPlayerSlotWidget.h"

void UUMGPartyPlayerSlotWidget::HandleKickPlayerButtonEvent()
{

}

UUMGPartyPlayerSlotWidget::UUMGPartyPlayerSlotWidget()
{
	this->PlayerName = NULL;
	this->AdditionalInformationText = NULL;
	this->FriendIcon = NULL;
	this->KickPlayerButton = NULL;
	this->PlayerInMatchOpacity = 0.000000;
	this->PlayerInLobbyOpacity = 0.000000;
	this->PlayerInformationContainer = NULL;
	this->ReadyIconsCanvas = NULL;
	this->RequestRoleIconsCanvas = NULL;
	this->RoleSwitcher = NULL;
	this->LeaderIcon = NULL;
}
