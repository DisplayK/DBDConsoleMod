#include "OfferingCard.h"
#include "EOfferingAnimState.h"
#include "Templates/SubclassOf.h"

class UOfferingCardAnim;

bool AOfferingCard::IsRevealed() const
{
	return false;
}

EOfferingAnimState AOfferingCard::GetState() const
{
	return EOfferingAnimState::None;
}

UOfferingCardAnim* AOfferingCard::GetCardAnimation() const
{
	return NULL;
}

void AOfferingCard::ChangeState(EOfferingAnimState state)
{

}

void AOfferingCard::ChangeAnimationClass(const TSubclassOf<UOfferingCardAnim>& animationClass)
{

}

AOfferingCard::AOfferingCard()
{
	this->_rarityTextures = TArray<FRarityTexture>();
	this->_offeringTypeTextures = TArray<FOfferingTypeTexture>();
}
