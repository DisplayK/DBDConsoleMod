#include "HudPresenter.h"

class APawn;

void UHudPresenter::OnPawnUnpossessed(APawn* pawn)
{

}

void UHudPresenter::OnPawnPossessed(APawn* pawn)
{

}

void UHudPresenter::OnLocallyObservedChanged()
{

}

bool UHudPresenter::IsPendingPawnReady() const
{
	return false;
}

bool UHudPresenter::IsHudReady() const
{
	return false;
}

UHudPresenter::UHudPresenter()
{
	this->HudParentContainer = EHudParentContainerType::Widget;
	this->_presentedCharacter = NULL;
	this->_pendingCharacter = NULL;
	this->_spectatorPawn = NULL;
}
