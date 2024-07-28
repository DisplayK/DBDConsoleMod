#include "UMGAtlantaNavigationScreen.h"
#include "PartyMemberUIData.h"
#include "ENavigationScreenButton.h"

TArray<FPartyMemberUIData> UUMGAtlantaNavigationScreen::GetPartyMembersData(int32 index) const
{
	return TArray<FPartyMemberUIData>();
}

void UUMGAtlantaNavigationScreen::ButtonClickEvent(ENavigationScreenButton buttonid)
{

}

UUMGAtlantaNavigationScreen::UUMGAtlantaNavigationScreen()
{
	this->BankAndPlayerInfoWidget = NULL;
	this->TextButtonStart = NULL;
	this->PlayModeSelectionVisibility = ESlateVisibility::Visible;
	this->CharacterInfoVisibility = ESlateVisibility::Visible;
	this->BackButtonVisibility = ESlateVisibility::Visible;
	this->MenuButtonsVisibility = ESlateVisibility::Visible;
	this->ButtonRoleVisibility = ESlateVisibility::Visible;
	this->ButtonRole = NULL;
	this->BottomRightWidgetSwitcher = NULL;
	this->PartyPlayerSlots = NULL;
	this->PartyCountdownLarge = NULL;
	this->_partyMembers = TArray<FPartyMemberUIData>();
}
