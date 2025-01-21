#include "MainMenuButtonData.h"

FMainMenuButtonData::FMainMenuButtonData()
{
	this->ButtonType = EMainMenuButton::News;
	this->Label = FText::GetEmpty();
	this->InfoTitle = FText::GetEmpty();
	this->LockedInfoTitle = FText::GetEmpty();
	this->IsDisabled = false;
	this->IsLocked = false;
	this->IsHidden = false;
}
