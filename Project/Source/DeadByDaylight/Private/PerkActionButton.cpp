#include "PerkActionButton.h"

UPerkActionButton::UPerkActionButton()
{
	this->TextUnlockLevelTitle = NULL;
	this->Activatable = false;
	this->SelectedImageVisibility = ESlateVisibility::Visible;
	this->ClickableButtonVisibility = ESlateVisibility::Visible;
	this->ClickableImageVisibility = ESlateVisibility::Visible;
	this->ProgressbarVisibility = ESlateVisibility::Visible;
	this->IdleTime = 0.000000;
}
