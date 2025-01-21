#include "UMGLobbyJoinedWidget.h"

void UUMGLobbyJoinedWidget::HandleLeaveButtonClicked()
{

}

UUMGLobbyJoinedWidget::UUMGLobbyJoinedWidget()
{
	this->LocalPlayerIsSlasher = false;
	this->TextLeaveLobby = FText::GetEmpty();
	this->TextPlayerNotReadyYet = FText::GetEmpty();
	this->TextWaitingPlayers = FText::GetEmpty();
	this->TextToBeReady = FText::GetEmpty();
	this->CommandButtonsContainer = NULL;
}
