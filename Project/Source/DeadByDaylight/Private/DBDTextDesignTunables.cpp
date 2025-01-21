#include "DBDTextDesignTunables.h"

UDBDTextDesignTunables::UDBDTextDesignTunables()
{
	this->LegalTextTitle = FText::GetEmpty();
	this->LegalText = FText::GetEmpty();
	this->ConsentTextTitle = FText::GetEmpty();
	this->ConsentText = FText::GetEmpty();
	this->LegalTextSIEA = FText::GetEmpty();
	this->LegalTextSIEE = FText::GetEmpty();
	this->SystemMessage_ChatDisconnected = FText::GetEmpty();
	this->SystemMessage_ChatReturnedToLobby = FText::GetEmpty();
	this->SystemMessage_ChatMatchServerClosed = FText::GetEmpty();
}
